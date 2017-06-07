#ifndef BINARYFACTORY_H
#define BINARYFACTORY_H
using namespace std;

#include "BaseFactory.h"

class BinaryFactory : public BaseFactory
{
	public:
		/* Constructor */
		BinaryFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif