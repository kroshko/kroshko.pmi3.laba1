#include <iostream>
#include "Animals.h"
#include "Pets.h"
#include "WildAnimals.h"
#include "Cats.h"
#include "Dogs.h"
#include "Foxes.h"
#include "Wolfs.h"

using namespace std;
int main()
{
	TCats w;
	w.SetSize(8); //наследование работает

	TFoxes l;
	l.SetSneezing(25);
	TWolfs v;
	char a=0;
	v.SetSneezing(a); //полиморфизм

	cout << l.GetSneezing()<<"\n";
	cout << w.GetSize();
}