#include "Pets.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
int TPets::GetPoroda()
{
	return Poroda;
}

int TPets::GetHealth()
{
	return Health;
}

void TPets::SetHealth(int _Health)
{
	Health = _Health;
}

void TPets::SetPoroda(int _Poroda)
{
	Poroda = _Poroda;
}



