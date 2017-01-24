#pragma once
#include "Compensator.h"

class SaturationCompensator : public Compensator
{
public:
	virtual void Change(Picture *picture, int tone, int bright, int satur)
	{
		picture->ChangeSaturation(satur);
	}
};
