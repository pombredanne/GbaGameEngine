#include "GBATimer.h"
#include "engine/gba/registers/RegisterMap.h"
#include "engine/base/Macros.h"
#include "engine/math/Math.h"

#define MAX_TIMERS 4

#define CNT_CASCADE_BIT_INDEX 2
#define CNT_INTERRUPTONOVERFLOW_BIT_INDEX 6
#define CNT_ACTIVE_BIT_INDEX 7

inline vu16* GetTimerDataAddr(u8 index)
{
	return (vu16*)(REG_TIMERDATA + (index * 0x04));
}

inline vu16* GetTimerControlAddrForIndex(u8 index)
{
	return (vu16*)(REG_TIMERCNT + (index * 0x04));
}

GBA::Timer::Timer(u8 timerIndex)
	: m_timerIndex(Math::Clamp(timerIndex, 0, MAX_TIMERS - 1))
{
	*GetTimerDataAddr(m_timerIndex) = 0;
	*GetTimerControlAddrForIndex(m_timerIndex) = 0;
}

void GBA::Timer::SetActive(bool active)
{
	if (active)
	{
		SET_BIT(*GetTimerControlAddr(), CNT_ACTIVE_BIT_INDEX);
	}
	else
	{
		CLEAR_BIT(*GetTimerControlAddr(), CNT_ACTIVE_BIT_INDEX);
	}
}

void GBA::Timer::SetCascadeMode(bool enabled)
{
	if (enabled)
	{
		SET_BIT(*GetTimerControlAddr(), CNT_CASCADE_BIT_INDEX);
	}
	else
	{
		CLEAR_BIT(*GetTimerControlAddr(), CNT_CASCADE_BIT_INDEX);
	}
}

void GBA::Timer::EnableInterruptOnOverflow(bool enabled)
{
	if (enabled)
	{
		SET_BIT(*GetTimerControlAddr(), CNT_INTERRUPTONOVERFLOW_BIT_INDEX);
	}
	else
	{
		CLEAR_BIT(*GetTimerControlAddr(), CNT_INTERRUPTONOVERFLOW_BIT_INDEX);
	}
}

void GBA::Timer::SetFrequency(ClockCycle cycle)
{
	// Clear previous frequency
	*GetTimerControlAddr() &= BITS_INDEXED_U32(2, 0);

	// Enable new frequency
	*GetTimerControlAddr() |= cycle;
}

void GBA::Timer::SetInitialTimerCount(u16 value)
{
	*GetTimerDataAddr(m_timerIndex) = value;
}

u16 GBA::Timer::GetCurrentTimerCount() const
{
	return *GetTimerDataAddr(m_timerIndex);
}

vu16 * GBA::Timer::GetTimerControlAddr() const
{
	return GetTimerControlAddrForIndex(m_timerIndex);
}
