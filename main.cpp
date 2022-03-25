#include <iostream>
#include "Animals.h"
#include "Pets.h"
#include "WildAnimals.h"
#include "Cats.h"
#include "Dogs.h"
#include "Foxes.h"
#include "Wolfs.h"
#include "Brod.h"
#include "Porod.h"
using namespace std;
int main(int args, char** argv)
{
	TCats w;
	w.SetSize(8); //наследование работает
	cout << w.GetSize();

	TCats brod1;
	brod1.SetValuemeow(50);
	TCats brod2 = brod1;

	TCats brod3(56, 30);
	brod3.SetPoroda(true);
	TBrod brod4;
	brod4.SetHome(true);
	brod3.Print();

	TDogs hunt1;

	hunt1.Print();
	TPets* hunt2 = new TDogs();

	TPorod Porod1;
	Porod1.SetLevel(19);
	Porod1.Print();
	cout << "\n" << endl;
	delete hunt2;
	return 0;
}