#pragma once
#include "Animals.h"
class TWildAnimals : public TAnimals
{
protected:
	char Habitat;
public:
	char GetHabitat();
	void SetHabitat(char _Habitat);

};