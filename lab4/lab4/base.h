/* 
Immanuel Chu
SID : 861 217 236
Lab Section : 21
Lab #4
4/30/17

Partner :  David Weber
*/

#ifndef BASE_H
#define BASE_H

#include <iostream>

using namespace std;

class Base
{
    public:
        //Constructors
        Base() { };
        
        //Pure virtual functions
        virtual double evaluate() = 0;
};

class Op : public Base
{
    public:
        Op(double data);
        
        double evaluate();
    //Represents a leaf node of a # that has no children

    //protected:
        double data;
};

class Sub : public Base
{
    //Represents a '-' node that has 2 children, capable of subtracting them
    //and producing a result
    public:
        Sub(Base* left, Base* right);
        
        double evaluate();
        
    private:
        Base* leftChild;
        Base* rightChild;
        
};

class Mult : public Base
{
        public:
        Mult(Base* left, Base* right);
        
        double evaluate();
        
    private:
        Base* leftChild;
        Base* rightChild;
};

class Div : public Base
{
        public:
        Div(Base* left, Base* right);
        
        double evaluate();
        
    private:
        Base* leftChild;
        Base* rightChild;
};

class Add : public Base
{
    public:
        Add(Base* left, Base* right);
        
        double evaluate();
        
    private:
        Base* leftChild;
        Base* rightChild;
};

class Sqr : public Base
{
        public:
        Sqr(Base* node);
        
        double evaluate();
        
    private:
        Base* child;
};

#endif
