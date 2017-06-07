#include "BasePrint.h"
#include "BaseFactory.h"
#include "DoubleFactory.h"
#include "DoubleFactory.h"

#include <iostream>

using namespace std;

	DoubleFactory::DoubleFactory() : BaseFactory() {}

	BasePrint* DoubleFactory::generatePrint(double value) {
		return new DoublePrint(value);
	}