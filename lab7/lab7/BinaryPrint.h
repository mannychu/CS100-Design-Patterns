#ifndef BINARYPRINT_H
#define BINARYPRINT_H

using namespace std;

#include "BasePrint.h"

class BinaryPrint : public BasePrint
{

	public:
		/* Constructors */
		BinaryPrint();
		BinaryPrint(double value);
		
		/* Pure Virtual Print Function */
		void print();
};

#endif