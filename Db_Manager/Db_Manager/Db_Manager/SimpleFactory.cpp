#include "SimpleFactory.h"
#include "SimpleDisplay.h"

SimpleFactory::SimpleFactory()
{
}


SimpleFactory::~SimpleFactory()
{
}

DisplayBase* SimpleFactory::Create()
{
	return new SimpleDisplay;
}


