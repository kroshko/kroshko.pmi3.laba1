#pragma once
#include "Cats.h"
class TBrod :public TCats
{
protected:
	bool Home;
public:
	TBrod();
	bool GetHome();
	void SetHome(bool _Home);
};