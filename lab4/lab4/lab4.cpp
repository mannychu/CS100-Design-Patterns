/* 
Immanuel Chu
SID : 861 217 236
Lab Section : 21
Lab #4
4/30/17

Partner :  David Weber
*/


#include <iostream>
#include <vector>
#include <list>
#include "base.h"
#include "container.h"
#include "sort.h"

using namespace std;


int main() {
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Mult* A = new Mult(op7, op4);
    Add* B = new Add(op3, A);
    Sub* C = new Sub(B, op2);
    Sqr* D = new Sqr(C);

    VectorContainer* container = new VectorContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);

    cout << endl << "~~VectorContainer~~";
    cout << endl << "Container Before Sort: " << endl;
    container->print();

    cout << "Container After Sort: " << endl;
    container->set_sort_function(new SelectionSort());
    // container2->set_sort_function(new BubbleSort());
    container->sort();
    container->print();
    
    
    ListContainer* container2 = new ListContainer();
    container2->add_element(A);
    container2->add_element(B);
    container2->add_element(C);
    container2->add_element(D);

    cout << endl << "~~ListContainer~~";
    cout << endl << "Container Before Sort: " << endl;
    container2->print();

    cout << "Container After Sort: " << endl;

    // container2->set_sort_function(new SelectionSort());
    container2->set_sort_function(new BubbleSort());

    container2->sort();
    container2->print();
    
};
