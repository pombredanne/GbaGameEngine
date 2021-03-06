#pragma once

#include "Scene.h"

// State machine specific for scene management
class SceneManager
{
	Scene* m_current = nullptr;
	Scene* m_queuedScene = nullptr;

	void UpdatedQueuedChange(Engine* engine);

public:
	SceneManager();
	~SceneManager();

	void UpdateScene(Engine* engine);
	inline void PreRenderScene(Engine* engine) { m_current->PreRender(engine); }
	inline void RenderScene(Engine* engine) { m_current->Render(engine); }

	template<typename SCENE>
	void ChangeScene(Engine* engine)
	{
		STATIC_ASSERT(IS_BASE_OF(Scene, SCENE), "SceneManager::Change must be provided a type that derives from Scene.h");

		// We queue up a scene load to make sure we aren't changing a scene while still running update functionality from that same scene
		m_queuedScene = new SCENE(engine);

		if (!m_current)
			UpdatedQueuedChange(engine);	// Initial scene
	}
};
