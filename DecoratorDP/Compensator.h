#pragma once
#include "Picture.h"

class Compensator
{
public:
	virtual void Change(Picture *picture, int tone, int bright, int satur) = 0;
};