#pragma once
#include "Pets.h"
class TCats :public TPets 
{
protected:
	int Valuemeow;
public:
	int GetValuemeow();
	void SetValuemeow(int _Valuemeow);
};

