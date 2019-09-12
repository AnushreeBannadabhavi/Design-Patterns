#pragma once
#include "Factory.h"
class UIFactory :
	public Factory
{
public:
	UIFactory();
	DisplayBase* Create();
	~UIFactory();
};

