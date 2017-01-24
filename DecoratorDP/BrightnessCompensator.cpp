#include "stdafx.h"
#include "BrightnessCompensator.h"

void BrightnessCompensator::Change(Picture *picture, int tone, int bright, int satur)
{
	picture->ChangeBrightness(bright);
}