#ifndef PRAGMA_ONCE_ENGINE_RENDERING_RENDERER_H
#define PRAGMA_ONCE_ENGINE_RENDERING_RENDERER_H

class GameObject;
class Camera;

class Renderer
{
protected:
	GameObject* m_gameObject;

public:
	Renderer(GameObject* gameObject);
	virtual ~Renderer() {};

	virtual void Render(Camera* camera) {};
};

#endif
