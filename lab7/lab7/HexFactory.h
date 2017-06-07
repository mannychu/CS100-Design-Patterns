#ifndef HEXFACTORY_H
#define HEXFACTORY_H
using namespace std;

#include "BaseFactory.h"

class HexFactory : public BaseFactory
{
	public:
		/* Constructor */
		HexFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif