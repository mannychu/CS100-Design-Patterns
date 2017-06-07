#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <vector>
#include "composite.h"

using namespace std;

class Op;


class Visitor
{
	public:
		Visitor();
		
		virtual void rootNode() = 0;		//For visiting a root node (do nothing)
		virtual void sqrNode() = 0;		    //For visiting a square node
		virtual void multNode() = 0;		//For visiting a multiple node
		virtual void subNode() = 0;		    //For visiting a subtraction node
		virtual void addNode() = 0;		    //For visiting an add node
		virtual void opNode(Op* op) = 0;	//For visiting a leaf node
 
		virtual void execute() = 0;		    //Prints all visited nodes
};

#endif

