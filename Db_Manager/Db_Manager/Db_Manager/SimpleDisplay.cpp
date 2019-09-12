#include "SimpleDisplay.h"
#include <iostream>

SimpleDisplay::SimpleDisplay()
{
}


SimpleDisplay::~SimpleDisplay()
{
}

void SimpleDisplay::Display(std::vector<int> &data)
{
	for (auto x: data)
		std::cout << x << " ";

	std::cout << '\n';
}
