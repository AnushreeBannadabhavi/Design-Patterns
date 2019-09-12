#pragma once
#include <vector>
#include "DisplayBase.h"

class UIDisplay : public DisplayBase
{
public:
	UIDisplay();
	void Display(std::vector<int> &data);
	~UIDisplay();
};

