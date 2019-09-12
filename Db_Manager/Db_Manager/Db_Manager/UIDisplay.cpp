#include "UIDisplay.h"
#include <sstream>
#include <windows.h>

UIDisplay::UIDisplay()
{
}


UIDisplay::~UIDisplay()
{
}


void UIDisplay::Display(std::vector<int> &data)
{
	std::ostringstream out;
	for (auto x : data)
		out << x << ' ';

	MessageBoxA(nullptr, out.str().c_str(), "Content", MB_OK);
}