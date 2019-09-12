#pragma once
#include "DisplayBase.h"
class Factory
{
public:
	Factory();
	virtual DisplayBase* Create() = 0;
	virtual ~Factory();
};

