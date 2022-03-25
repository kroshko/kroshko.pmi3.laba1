#pragma once
#include "Animals.h"
class TPets :public TAnimals
{
protected:
	int Poroda;
	int Health;
public:
	int GetPoroda();
	void SetPoroda(int _Poroda);
	int GetHealth();
	void SetHealth(int _Health);
};