#ifndef HEXFACTORY_H
#define HEXFACTORY_H

#include "BaseFactory.h"
#include "BasePrint.h"

class HexFactory : public Base Factory {
	
	private:
		double hexFacVal;
	
	public:
		HexFactory();
		BasePrint* generatePrint(double value);
};



#endif