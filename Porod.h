#pragma once
#include "Pets.h"
#include "Cats.h"
class TPorod : public TCats
{
protected:
	double Level;
public:
	TPorod();
	double GetLevel();
	void SetLevel(double _Level);
	virtual void Print();

};