/* 
Immanuel Chu
SID : 861 217 236
Lab Section : 21
Lab #4
4/30/17

Partner :  David Weber
*/

#ifndef SORT_H
#define SORT_H

#include <iostream>

using namespace std;

class Sort {
	public:
           /* Constructors */
		Sort();
 
           /* Pure Virtual Functions */
		virtual void sort(Container* container)=0;
		
};

class SelectionSort : public Sort
{
    public:
        SelectionSort();
        virtual void sort(Container* container);
};


class BubbleSort : public Sort
{
    public:
        BubbleSort();
        virtual void sort(Container* container);
};

#endif