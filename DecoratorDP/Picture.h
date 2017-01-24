#pragma once
#include "common.h"

class Picture
{
	int tone;
	int brightness;
	int saturation;

public:
	Picture(int tone, int brightness, int saturation);
	void ChangeTone(int tone);
	void ChangeBrightness(int brightness);
	void ChangeSaturation(int saturation);
	void View();
};
