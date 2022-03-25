#include "Porod.h"
#include <stdlib.h>
#include <iostream>

TPorod::TPorod()
{
}

double TPorod::GetLevel()
{
	return Level;
}

void TPorod::SetLevel(double _Level)
{
	Level = _Level;
}

void TPorod::Print()
{
	std::cout << "Porod, Level= \t " << this->GetLevel() << std::endl;
}
