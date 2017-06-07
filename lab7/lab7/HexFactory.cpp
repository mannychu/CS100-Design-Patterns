#include "HexFactory.h"
#include "HexPrint.h"

using namespace std;

HexFactory::HexFactory()
{
    return;
}


BasePrint* HexFactory::generatePrint(double value)
{
    HexPrint* hex = new HexPrint(value);
    return hex;
}