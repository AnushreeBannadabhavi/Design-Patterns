#include "DataSource.h"
#include "SimpleFactory.h"
#include "UIFactory.h"

int main(){
	/**************************************
	Even if ds.display() is not called, Allocation is done for the Display classes.

	Allocation should be done inside ds.Display() function. But we dont know which display class should be 
	allocated. Passing the parameter in ds.Display()function will violate Open-Close Principle.

	Therefore, The responsibility of instantiation is taken care by a factory class.
	/**************************************/
#if 0
	DataSource ds(new SimpleDisplay);
	DataSource ds(new UIDisplay);
#endif

	DataSource ds;
	//ds.SetFactory(new SimpleFactory);
	ds.SetFactory(new UIFactory);
	ds.Query();
	ds.Display();
	ds.Update(6, 100);
	ds.Display();
	return 0;
}