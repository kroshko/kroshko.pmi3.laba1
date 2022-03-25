#include "Cats.h"

TCats::TCats()
{
}

double TCats::GetValuemeow()
{
	return Valuemeow;
}
void TCats::SetValuemeow(double _Valuemeow)
{
	Valuemeow = _Valuemeow;
}

TCats::TCats(double _Poroda, double _Health)
{
	SetHealth(_Health);
	SetPoroda(_Poroda);
}
