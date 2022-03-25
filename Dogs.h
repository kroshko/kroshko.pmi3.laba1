#pragma once
#include "Pets.h"
class TDogs :public TPets
{
protected:
	bool Loyalty;
public:
	bool GetLoyalty();
	void SetLoyalty(bool _Loyalty);
};


