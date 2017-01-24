#include "stdafx.h"
#include "MultiCompensator.h"

void MultiCompensator::Change(Picture *picture, int tone, int bright, int satur)
{
	CIter seek = compensators.begin();
	CIter end = compensators.end();

	for (; seek != end; ++seek)
	{
		(*seek)->Change(picture, tone, bright, satur);
	}
}

void MultiCompensator::AddCompensator(Compensator *compensator)
{
	compensators.push_back(compensator);
}