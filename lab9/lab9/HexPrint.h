#ifndef HEXPRINT_H
#define HEXPRINT_H

using namespace std;

#include "BasePrint.h"

class HexPrint : public BasePrint
{

	public:
		/* Constructors */
		HexPrint();
		HexPrint(double value);
		
		/* Pure Virtual Print Function */
		void print();
};

#endif