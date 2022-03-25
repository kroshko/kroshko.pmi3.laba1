#pragma once
#include "Animals.h"
class TWildAnimals : public TAnimals
{
protected:
	int Habitat;
public:
	int GetHabitat();
	void SetHabitat(int _Habitat);

};