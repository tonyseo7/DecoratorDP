#include "stdafx.h"
#include "ToneCompensator.h"

void ToneCompensator::Change(Picture *picture, int tone, int bright, int satur)

{
	picture->ChangeTone(tone);
}