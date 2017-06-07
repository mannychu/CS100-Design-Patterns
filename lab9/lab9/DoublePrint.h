#ifndef DOUBLEPRINT_H
#define DOUBLEPRINT_H

using namespace std;

#include "BasePrint.h"

class DoublePrint : public BasePrint
{

	public:
		/* Constructors */
		DoublePrint();
		DoublePrint(double value);
		
		/* Pure Virtual Print Function */
		void print();
};

#endif