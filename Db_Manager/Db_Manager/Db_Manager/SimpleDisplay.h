#pragma once
#include <vector>
#include "DisplayBase.h"

class SimpleDisplay : public DisplayBase
{
public:
	SimpleDisplay();
	void Display(std::vector<int> &data);
	~SimpleDisplay();
};

