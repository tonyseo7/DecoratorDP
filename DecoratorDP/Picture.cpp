#include "stdafx.h"
#include "Picture.h"

Picture::Picture(int tone, int brightness, int saturation)
{
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

void Picture::ChangeTone(int tone)
{
	this->tone += tone;
}

void Picture::ChangeBrightness(int brightness)
{
	this->brightness += brightness;
}

void Picture::ChangeSaturation(int saturation)
{
	this->saturation += saturation;
}

void Picture::View()
{
	cout << "����:" << tone << "��:";
	cout << brightness << "ä��:" << saturation << endl;
}