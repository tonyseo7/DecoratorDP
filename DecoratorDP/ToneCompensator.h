#pragma once
#include "Compensator.h"


class ToneCompensator : public Compensator
{
public:
	virtual void Change(Picture *picture, int tone, int bright, int satur);
};