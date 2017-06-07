#include <iostream>
#include <sstream>
#include "PrintVisitor.h"

using namespace std;

PrintVisitor::PrintVisitor()
{
    return;
}
 
void PrintVisitor::rootNode()
{
    //For visiting a root node (do nothing)
    return;
}

void PrintVisitor::sqrNode()
{
    //For visiting a square node
    output.append("^ ");
    return;
}

void PrintVisitor::multNode()
{
    //For visiting a multiple node
    output.append("* ");
    return;
}

void PrintVisitor::subNode()
{
    //For visiting a subtraction node
    output.append("- ");
    return;
}

void PrintVisitor::addNode()
{
    //For visiting an add node
    output.append("+ ");
    return;
}

void PrintVisitor::opNode(Op* op)
{
    //For visiting a leaf node
    stringstream ss;
    ss << op->evaluate();
    
    string val = ss.str();
    val = val + " ";
    output.append(val);
    return;
}

void PrintVisitor::execute()
{
    //Prints all visited nodes
    cout << "Result: " << output << endl;
    return;
    
}