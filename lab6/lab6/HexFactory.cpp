#include "BasePrint.h"
#include "BaseFactory.h"
#include "HexFactory.h"
#include "HexPrint.h"

#include <iostream>

	HexFactory::HexFactory() : BaseFactory() {}

	BasePrint* HexFactory::generatePrint(double value) {
		return new HexPrint(value);
	}