#pragma once
#include "Animals.h"
class TPets :public TAnimals
{
protected:
	int Poroda;
public:
	int GetPoroda();
	void SetPoroda(int _Poroda);

};