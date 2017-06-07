#ifndef DOUBLEFACTORY_H
#define DOUBLEFACTORY_H

#include "BaseFactory.h"
#include "BasePrint.h"

class DoubleFactory : public Base Factory {
	
	private:
		double DoubleFacVal;
	
	public:
		DoubleFactory();
		BasePrint* generatePrint(double value);
};



#endif