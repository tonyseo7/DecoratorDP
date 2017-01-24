#pragma once
#include "Compensator.h"
#include "common.h"

typedef vector<Compensator *>Compensators;
typedef vector<Compensator *>::iterator CIter;


class MultiCompensator : public Compensator
{
	Compensators compensators;

public:
	virtual void Change(Picture *picture, int tone, int bright, int satur);

	void AddCompensator(Compensator *compensator);
};
