#include <iostream>
#include <sstream>
#include <iomanip>
#include <string.h>

#include "base.h"
#include "container.h"
#include "BaseFactory.h"
#include "DoubleFactory.h"
#include "HexFactory.h"
#include "BinaryFactory.h"
#include "BasePrint.h"
#include "sort.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    /* Read in the input flag */
	char* s = argv[1];
    
    /* Create and set the Factory */
	BaseFactory* baf = NULL;
	if(strcmp(s,"d")==0){
		baf = new DoubleFactory();
	}else if(strcmp(s,"h")==0){
		baf = new HexFactory();
	}else{
		baf = new BinaryFactory();
	}
    
    /* Create the elements for testing */
	Op* op1 = new Op(5);
	Op* op2 = new Op(2);
	Op* op3 = new Op(4);
	Op* op4 = new Op(6);
	Mult* A = new Mult(op1, op2);
	Sub* B = new Sub(op3, op4);
	Add* C = new Add(A, B);
	Sqr* D = new Sqr(C);

    /* Save the elements to the container */
	VectorContainer* container = new VectorContainer(baf);
	container->add_element(A);
	container->add_element(B);
	container->add_element(D);
    
    /* Print the container before it is sorted */
	cout << "Container Before Sort: " << endl;
	container->print();
    
    /* Print the container after it is sorted */
    cout << "Container After Sort: " << endl;
	container->set_sort_function(new BubbleSort());
	container->sort();
	container->print();
}
;