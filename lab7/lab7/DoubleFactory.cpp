#include "DoubleFactory.h"
#include "DoublePrint.h"

using namespace std;

DoubleFactory::DoubleFactory()
{
    return;
}


BasePrint* DoubleFactory::generatePrint(double value)
{
    DoublePrint* dub = new DoublePrint(value);
    return dub;
}