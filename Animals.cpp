#include "Animals.h"
double TAnimals::GetSize()
{
	return size;
}

double TAnimals::GetWeight()
{
	return weight;
}

void TAnimals::SetSize(double _size)
{
	if (_size > 0)
		size = _size;
}

void TAnimals::SetWeight(double _weight)
{
	if (_weight > 0)
		weight = _weight;

}

