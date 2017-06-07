#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"
using namespace std;

class Command {
	protected:
		Base* root;
	
	public:
		Command() { };
		double execute() {
			return root->evaluate();
		};
		Base* get_root() {
			return root;
		};
};

class OpCommand : public Command {
	//OpCommand Code Here
	public:
		OpCommand() { };
		
		OpCommand(double val)
		{
		    this->root = new Op(val);
		    return;
		}
		
		double execute()
		{
			return root->evaluate();
		}

};

class AddCommand : public Command {
	//AddCommand Code Here
	public:
		AddCommand() { };
		
		AddCommand(Command* left, double val)
		{
		    Base* right = new Op(val);
		    
		    this->root = new Add(left->get_root(), right);
		    return;
		}
};

class SubCommand : public Command {
	//SubCommand Code Here
	public:
		SubCommand() { };
		
		SubCommand(Command* left, double val)
		{
		    Base* right = new Op(val);
		    
		    this->root = new Sub(left->get_root(), right);
		    
		    return;
		}
};

class MultCommand : public Command {
	//MultCommand Code Here
	public:
		MultCommand() { };
		
		MultCommand(Command* left, double val)
		{
		    Base* right = new Op(val);
		    
		    this->root = new Mult(left->get_root(), right);
		    
		    return;
		}
};

class SqrCommand : public Command {
	//SqrCommand Code Here
	public:
		SqrCommand() { };
		
		SqrCommand(Command* left)
		{
		    this->root = new Sqr(left->get_root());
		    
		    return;
		}
};

#endif //__COMMAND_CLASS__
