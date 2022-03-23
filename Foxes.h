#pragma once
#include "WildAnimals.h" 
class TFoxes : public TWildAnimals
{
protected:
	int Sneezing;
public:
	int GetSneezing();
	void SetSneezing(int _Sneezing);
};

