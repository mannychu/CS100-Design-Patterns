#ifndef BINARYPRINT_H
#define BINARYPRINT_H

#include "BasePrint.h"

class BinaryPrint : public BasePrint {
	
	private:
		double binVal;

	public:
		BinaryPrint();
		BinaryPrint(double value);
		void print();
};

#endif