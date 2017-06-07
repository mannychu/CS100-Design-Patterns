#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <iostream>
#include <vector>
#include "command.h"
#include "composite.h"
#include "Visitor.h"

using namespace std;

class PrintVisitor : public Visitor {
	private:
		string output;
 
	public:
		PrintVisitor();
 
		void rootNode();		//For visiting a root node (do nothing)
		void sqrNode();		    //For visiting a square node
		void multNode();		//For visiting a multiple node
		void subNode();		    //For visiting a subtraction node
		void addNode();		    //For visiting an add node
		void opNode(Op* op);	//For visiting a leaf node
 
		void execute();		    //Prints all visited nodes
};

#endif

