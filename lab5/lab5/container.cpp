/* 
David Weber 
SID: 
Lab Section: 21
Lab #4
4/30/17

Partner: Immanuel Chu
*/

#include "container.h"
#include "base.h"
#include "sort.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

void Container::set_sort_function(Sort* sort_function){
    
    this->sort_function = sort_function;
    
    return;
}

void VectorContainer::add_element(Base* element)
{
    myVec.push_back(element);
    return;
}

void ListContainer::add_element(Base* element)
{
    myList.push_back(element);
    return;
}

void VectorContainer::print() 
{
    // for(int i = 0; i < size(); i++)
    // {
    //     cout << myVec.at(i)->evaluate() << " ";      // need to implement at() function
    // }
    // cout << endl;
    for(int i = 0; i < size(); i++)
    {
        BasePrint* obj = base->generatePrint(myVec.at(i)->evaluate());
        obj->print();
    }
    
    return;
}

void ListContainer::print()
{
    list<Base*>::iterator it;
    for (it = myList.begin(); it != myList.end(); ++it) 
    {
        cout << (*it)->evaluate() << " ";
    }
    cout <<  endl;
    return;
}

void VectorContainer::sort() 
{
    sort_function->sort(this);
    return;
}

void ListContainer::sort() 
{
    sort_function->sort(this);
    return;
}

void VectorContainer::swap(int i, int j) 
{
    
    Base* temp;
    
    temp = myVec.at(i);
    myVec.at(i) = myVec.at(j);
    myVec.at(j) = temp;
    

    return;
}

Base* ListContainer::at(int i)
{
    list<Base*>::iterator it = myList.begin();
    
    advance(it, i);
    
    return *it;
}

void ListContainer::swap(int i, int j) 
{
    
	list<Base*>::iterator it = myList.begin();
	list<Base*>::iterator jt = myList.begin();

	advance(it, i);
	advance(jt, j);


    Base* tmp = *it;
                       
	*it = *jt;
	*jt = tmp;

    
    return;
}


Base* VectorContainer::at(int i)
{
    return myVec.at(i);
}



int VectorContainer::size() 
{
    return myVec.size();
}

int ListContainer::size() 
{
    return myList.size();
}
