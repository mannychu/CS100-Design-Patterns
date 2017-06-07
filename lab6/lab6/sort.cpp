/* 
Immanuel Chu
SID : 861 217 236
Lab Section : 21
Lab #4
4/30/17

Partner :  David Weber
*/

#include "container.h"
#include "sort.h"

#include <iostream>

using namespace std;

Sort::Sort()
{
    return;
};

SelectionSort::SelectionSort()
{
    
    return;
};


BubbleSort::BubbleSort() : Sort()
{
    
    return;
};

void SelectionSort::sort(Container* container)
{   
    for(int i = 0; i < container->size(); i++)
    {
        int minIndex = i;
        
        for(int j = i + 1; j < container->size(); j++)
        {
            if(container->at(i)->evaluate() > container->at(j)->evaluate())
            {
                minIndex = j;
            }
        }
        
        container->swap(i, minIndex);
    }

    
    return;
}

void BubbleSort::sort(Container* container)
{   
    bool swapped = true;
    int j = 0;
    
    while(swapped)
    {
        swapped = false;
        j++;
        for(int i = 0; i < container->size() - j; i++)
        {
            if(container->at(i)->evaluate() > container->at(i+1)->evaluate())
            {
                container->swap(i, i+1);
                swapped = true;
            }
        }
    }
    return;
}














