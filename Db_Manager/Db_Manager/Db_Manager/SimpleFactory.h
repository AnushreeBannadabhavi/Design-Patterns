#pragma once
#include "Factory.h"
class SimpleFactory :
	public Factory
{
public:
	SimpleFactory();
	DisplayBase* Create();
	~SimpleFactory();
};

