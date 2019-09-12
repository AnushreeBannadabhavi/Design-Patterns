#include "UIFactory.h"
#include "UIDisplay.h"

UIFactory::UIFactory()
{
}


UIFactory::~UIFactory()
{
}

DisplayBase* UIFactory::Create()
{
	return new UIDisplay;
}
