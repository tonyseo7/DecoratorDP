#pragma once

#include "Compensator.h"

class BrightnessCompensator : public Compensator
{
public:
	virtual void Change(Picture *picture, int tone, int bright, int satur);
};
