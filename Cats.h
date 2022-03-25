#pragma once
#include "Pets.h"
class TCats : public TPets 
{
protected:
	double Valuemeow;
public:
	TCats();
	double GetValuemeow();
	TCats(double _Poroda, double _Health);
	void SetValuemeow(double _Valuemeow);
};