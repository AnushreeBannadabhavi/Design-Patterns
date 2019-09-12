#pragma once
#include <vector>

class DisplayBase
{
public:
	DisplayBase();
	virtual void Display(std::vector<int> &data) = 0;
	virtual ~DisplayBase();
};

