#include "BasePrint.h"
#include "BaseFactory.h"
#include "BinaryFactory"
#include "BinaryPrint.h"

#include <iostream>
#include <bitset>

	BinaryFactory::BinaryFactory() : BaseFactory();

	BasePrint* BinaryFactory::generatePrint(double value) {
		return new BinaryPrint(value);
	}