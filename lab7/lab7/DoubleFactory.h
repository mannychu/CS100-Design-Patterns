#ifndef DOUBLEFACTORY_H
#define DOUBLEFACTORY_H
using namespace std;

#include "BaseFactory.h"

class DoubleFactory : public BaseFactory
{
	public:
		/* Constructor */
		DoubleFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif