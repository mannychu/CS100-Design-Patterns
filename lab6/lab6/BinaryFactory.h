#ifndef BINARYFACTORY_H
#define BINARYFACTORY_H

#include "BaseFactory.h"
#include "BasePrint.h"

class BinaryFactory : public Base Factory {
	
	private:
		double binFacVal;
	
	public:
		BinaryFactory();
		BasePrint* generatePrint(double value);
};



#endif