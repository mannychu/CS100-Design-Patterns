#ifndef BASEFACTORY_H
#define BASEFACTORY_H
using namespace std;

#include "BasePrint.h"

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory() {};

		/* Pure Virtual Generate Function */
		virtual BasePrint* generatePrint(double value) = 0;
};
#endif