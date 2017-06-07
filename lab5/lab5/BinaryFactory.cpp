#include "BinaryFactory.h"
#include "BinaryPrint.h"

using namespace std;

BinaryFactory::BinaryFactory()
{
    return;
}


BasePrint* BinaryFactory::generatePrint(double value)
{
    BinaryPrint* bin = new BinaryPrint(value);
    return bin;
}