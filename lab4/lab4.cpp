/* 
David Weber 
SID: 
Lab Section: 21
Lab #4
4/30/17

Partner: Immanuel Chu
*/

#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include "base.h"
#include "container.h"
#include "sort.h"

using namespace std;


int main() {
    Op* op7 = new Op(7.2);
    Op* op4 = new Op(-4.5);
    Op* op3 = new Op(3.0);
    Op* op2 = new Op(-2.8);
    Mult* A = new Mult(op7, op4);
    Add* B = new Add(op3, A);
    Sub* C = new Sub(B, op2);
    //Sqr* D = new Sqr(C);
    

    cout << "Result: " << C->evaluate() << endl;


//Tests ceiling
    Ceil* E = new Ceil(C);
    cout << "Ceil: " << E->evaluate() << endl;
    
//Tests floor
    Floor* F = new Floor(C);
    cout << "Floor: " << F->evaluate() << endl;

//Tests abs
    Abs* G = new Abs(F);
    cout << "Abs: " << G->evaluate() << endl;
    
    return 0;
};
