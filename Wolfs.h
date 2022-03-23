#pragma once
#include "WildAnimals.h"
class TWolfs : public TWildAnimals
{
protected:
	char Sneezing;
public:
	char GetSneezing();
	void SetSneezing(char _Sneezing);
};
