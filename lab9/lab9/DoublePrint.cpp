#include <iostream>
#include <iomanip>

#include "BasePrint.h"
#include "DoublePrint.h"

using namespace std;

DoublePrint::DoublePrint()
{
    
    return;
}

DoublePrint::DoublePrint(double value) : BasePrint(value)
{
    return;
}


void DoublePrint::print()
{
    cout << "Double: " << this->value << endl;
    
    return;
}