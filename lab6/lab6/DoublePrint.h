#ifndef DOUBLEPRINT_H
#define DOUBLEPRINT_H

#include "BasePrint.h"
class DoublePrint : public BasePrint {

	private:
		double doubleVal;

	public:
		DoublePrint();
		DoublePrint(doubleVal);
		void print();
};

#define