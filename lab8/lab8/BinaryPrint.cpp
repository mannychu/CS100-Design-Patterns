#include <iostream>
#include <iomanip>
#include <bitset>

#include "BasePrint.h"
#include "BinaryPrint.h"

using namespace std;

BinaryPrint::BinaryPrint()
{
    return;
}

BinaryPrint::BinaryPrint(double value) : BasePrint(value)
{
    return;
}


void BinaryPrint::print()
{
    bitset<8> bin(value);
    cout << "Binary: " << bin << endl;
    
    return;
}