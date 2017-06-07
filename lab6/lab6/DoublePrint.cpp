#include "BasePrint.h"
#include "DoublePrint.h"

#include <iostream>
#include <bitset>

	DoublePrint::DoublePrint() : BasePrint() {}
	DoublePrint::DoublePrint(doubleVal) : BasePrint(value) {
		this->doubleVal = value;
	}
	void DoublePrint::print() {
		cout << "double value is : " << doubleVal << endl;
	}

