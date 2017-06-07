#include <iostream>
#include <iomanip>

#include "BasePrint.h"
#include "HexPrint.h"

using namespace std;

HexPrint::HexPrint()
{
    return;
}

HexPrint::HexPrint(double value) : BasePrint(value)
{
    return;
}


void HexPrint::print()
{
    cout << "Hex: " << hex << (int)value << endl;
    
    return;
}