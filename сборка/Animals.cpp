#include "Animals.h"
TAnimals::TAnimals()
{
	size = 0;
	weight = 0;
	colorCount = 7;
	color = new int[colorCount];
}
TAnimals::~TAnimals()
{
	weight = 0;
	size = 0;
	delete[] color;
}
double TAnimals::GetSize()
{
	return size;
}

double TAnimals::GetWeight()
{
	return weight;
}

int TAnimals::GetColorCount()
{
	return colorCount;
}

int* TAnimals::GetColor()
{
	return nullptr;
}

void TAnimals::SetSize(double _size)
{
	if (_size)
		size = _size;
}

void TAnimals::SetWeight(double _weight)
{
	if (_weight > 0)
		weight = _weight;

}

void TAnimals::SetColorCount(int _colorCount)
{
	if (_colorCount > 0)
	{
		int* temp = new int[_colorCount];
		for (int i = 0; i < (colorCount > _colorCount ? colorCount : colorCount); i++)

	}
}

void TAnimals::SetColor(int* _size, int i)
{
}