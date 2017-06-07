#include "BasePrint.h"
#include "BinaryPrint.h"

#include <iostream>
#include <bitset>

using namespace std;

	BinaryPrint::BinaryPrint() : BasePrint() {}

	BinaryPrint::BinaryPrint(binVal) : BasePrint(value){
		this->binVal = value;
	}
	void BinaryPrint::print() {
		bitset<8> binPrint;

		cout << "original double is : " << binVal << endl;
		cout << "binary value is : " << bitset<8>(binVal) << endl;
	}
