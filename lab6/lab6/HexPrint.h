#ifndef HEXPRINT_H
#define HEXPRINT_H

#include "BasePrint.h"

class HexPrint : public BasePrint {
	private:
		double hexVal;

	public:
		HexPrint();
		BasePrint* generatePrint(double value);
};

#endif