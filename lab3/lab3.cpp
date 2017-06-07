/* 
Immanuel Chu
SID : 861 217 236
Lab Section : 21
Lab #3
4/20/17

Partner :  David Weber

*/


#include <iostream>


using namespace std;

class Base {
    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class Op : public Base {
    
    public:
	    Op(double data) : Base() {
	    	this->data = data;
	    }	

	    double evaluate() {
	    	return data;
	    }

	protected:
		double data;

    //Represents a leaf node of a # that has no children
    // AKA left and right both stay NULL but data is filled
};

class Mult : public Base {

	public:
		Mult (Base* left, Base* right) : Base() {
			leftChild = left;
			rightChild = right;
		}

		double evaluate() {
			return (leftChild->evaluate() * rightChild->evaluate());
		}

	private:
		Base* leftChild;
		Base* rightChild;


};

class Div : public Base {

	public:
		Div (Base* left, Base* right) : Base() {
			leftChild = left;
			rightChild = right;
		}

		double evaluate() {
			return (leftChild->evaluate() / rightChild->evaluate());
		}

	private:
		Base* leftChild;
		Base* rightChild;

};

class Add : public Base {

	public:
		Add (Base* left, Base* right) : Base() {
			leftChild = left;
			rightChild = right;
		}

		double evaluate() {
			return (leftChild->evaluate() + rightChild->evaluate());
		}

	private:
		Base* leftChild;
		Base* rightChild;

};

class Sqr : public Base {

	public:
		Sqr (Base* og) : Base() {
			this->og = og;
		}

		double evaluate() {
			return (og->evaluate() * og->evaluate());
		}
		
	private:

		Base* og;


};

class Sub : public Base {

	public:

		Sub (Base* left, Base* right) : Base() {
			leftChild = left;
			rightChild = right;
		}

		double evaluate() {
			return (leftChild->evaluate() - rightChild->evaluate());
		}

	private:
		Base* leftChild;
		Base* rightChild;
};

int main() {

	double n1;
	double n2;

	cout << "Enter two doubles for testing: " << endl;
	cin >> n1;
	cin >> n2;

	Base* node1 = new Op(n1);
	Base* node2 = new Op(n2);

	//subtraction
	cout << "subtraction" << endl;
	Base* subtraction = new Sub(node1, node2);
	cout << subtraction->evaluate() << endl;
	
	//addition
	cout << "addition" << endl;
	Base* addition = new Add(node1, node2);
	cout << addition->evaluate() << endl;

	//division
	cout << "division" << endl;
	Base* division = new Div(node1, node2);
	cout << division->evaluate() << endl;

	//multiplication
	cout << "multiplication" << endl;
	Base* multiplication = new Mult(node1, node2);
	cout << multiplication->evaluate() << endl;

	//square
	cout << "square first number (" << n1 << ")" << endl;
	Base* square = new Sqr(node1);
	cout << square->evaluate() << endl;
	
	return 0;
}











