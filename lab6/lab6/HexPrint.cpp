#include "BasePrint.h"
#include "HexPrint.h"

#include <iostream>
#include <bitset>

using namespace std;

	HexPrint::HexPrint() : BasePrint() {}

	HexPrint::HexPrint(hexVal) : BasePrint(value) {
		this->hexVal = value;
	}

	void HexPrint::print() {
		coud << hexfloat << "hex value is : " << hexVal << endl;
	}