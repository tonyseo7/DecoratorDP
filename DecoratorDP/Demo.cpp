#include "stdafx.h"
#include "ToneCompensator.h"
#include "BrightnessCompensator.h"
#include "SaturationCompensator.h"
#include "MultiCompensator.h"

void main()
{
	Picture *picture = new Picture(100, 100, 100);


	Compensator *compensator = new MultiCompensator();

	Compensator *tonecom = new ToneCompensator();
	Compensator *brightcom = new BrightnessCompensator();
	Compensator *saturcom = new SaturationCompensator();


	MultiCompensator *mc;
	mc = dynamic_cast<MultiCompensator *>(compensator);

	mc->AddCompensator(tonecom);
	mc->AddCompensator(brightcom);
	mc->AddCompensator(saturcom);

	compensator->Change(picture, 20, 15, 12);
	picture->View();

	delete saturcom;
	delete brightcom;
	delete tonecom;
	delete picture;
	delete compensator;

}