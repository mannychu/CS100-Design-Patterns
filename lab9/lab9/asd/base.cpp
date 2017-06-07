/* 
David Weber 
SID: 
Lab Section: 21
Lab #4
4/30/17

Partner: Immanuel Chu
*/
#include "base.h"

using namespace std;

#include <iostream>
#include <vector>
#include <list>
#include <cmath>


        Op::Op(double data) : Base()
        {
            this->data = data;
        }
        
        double Op::evaluate() { 
            return data;
        }


        Sub::Sub(Base* left, Base* right)
        {
            this->leftChild = left;
            this->rightChild = right;
            return;
        }
        
        double Sub::evaluate()
        {
            return (leftChild->evaluate() - rightChild->evaluate());
        }
        


        Mult::Mult(Base* left, Base* right)
        {
            this->leftChild = left;
            this->rightChild = right;
            return;
        }
        
        double Mult::evaluate()
        {
            return (leftChild->evaluate() * rightChild->evaluate());
        }


        Div::Div(Base* left, Base* right)
        {
            this->leftChild = left;
            this->rightChild = right;
            return;
        }
        
        double Div::evaluate()
        {
            return (leftChild->evaluate() / rightChild->evaluate());
        }
        

        Add::Add(Base* left, Base* right)
        {
            this->leftChild = left;
            this->rightChild = right;
            return;
        }
        
        double Add::evaluate()
        {
            return (leftChild->evaluate() + rightChild->evaluate());
        }


        Sqr::Sqr(Base* node)
        {
            this->child = node;
            return;
        }
        
        double Sqr::evaluate()
        {
            return (child->evaluate() * child->evaluate());
        }
        
        
        Ceil::Ceil(Base* node)
        {
            this->child = node;
            return;
        }
        
        double Ceil::evaluate()
        {
            double a = ceil(child->evaluate());
            
            return a;
        }
        
        Floor::Floor(Base* node)
        {
            this->child = node;
            return;
        }
        
        double Floor::evaluate()
        {
            double a = floor(child->evaluate());
            
            return static_cast<int>(a);
        }
        
        Abs::Abs(Base* node)
        {
            this->child = node;
            return;
        }
        
        double Abs::evaluate()
        {
            double a = abs(child->evaluate());
            
            return a;
        }

