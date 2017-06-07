#ifndef BASEPRINT_H
#define BASEPRINT_H
using namespace std;

class BasePrint 
{
	protected:
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BasePrint();
		BasePrint(double value);
		
		/* Pure Virtual Print Function */
		virtual void print() = 0;
};

#endif