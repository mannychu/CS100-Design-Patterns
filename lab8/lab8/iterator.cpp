

#include "iterator.h"
using namespace std;


//OperatorIterator  Implementation
/*The OperatorIterator will be used to iterate over composite nodes with two 
children. This means it’s first will initialize to the left child, and its 
next will cycle from left child (which is where it is set to start), 
to right child, then to NULL. 
*/
OperatorIterator::OperatorIterator(Base* ptr) : Iterator(ptr) 
{
    this->self_ptr = ptr;
    this->current_ptr = ptr;
}

void OperatorIterator::first() 
{
    this->current_ptr = this->self_ptr->get_left();
    return;
}

void OperatorIterator::next() 
{
    if(this->self_ptr->get_left() == this->current_ptr) 
    {
        this->current_ptr = this->self_ptr->get_right();
    }
    else 
    {
        this->current_ptr = NULL;
    }
    return;
}

bool OperatorIterator::is_done() 
{
    if(this->current_ptr == NULL) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

Base* OperatorIterator::current() 
{
    return this->current_ptr;
}

//UnaryIterator Implementation
/*The UnaryIterator will be used to iterate over composite nodes with one 
child (only Sqr in our case). This means it’s first will initialize to the 
only child (which has been redeclared in the composite class as the left child, 
with Unary having no right child to make for an easier interface), and next 
will cycle from child (which is where it is set to start) to NULL.
 */
UnaryIterator::UnaryIterator(Base* ptr) : Iterator(ptr) 
{
    this->self_ptr = ptr;
    this->current_ptr = ptr;
}

void UnaryIterator::first() 
{
    this->current_ptr = this->self_ptr->get_left();
}

void UnaryIterator::next() 
{
    this->current_ptr = NULL;
}

bool UnaryIterator::is_done() {
    if (this->current_ptr == NULL) {
        return true;
    }
    else {
        return false;
    }
}

Base* UnaryIterator::current() 
{
    return this->current_ptr;
}    
//NullIterator Implementation
/*The NullIterator is used to iterate over leaf nodes. Since leaf nodes 
have no children, the NullIterator’s is_done() will always return true and 
it’s current() will always return NULL. It’s first() and next() functions 
don’t need to do anything.
 */
NullIterator::NullIterator(Base* ptr) : Iterator(ptr) 
{
    this->self_ptr = ptr;
}

void NullIterator::first() {}

void NullIterator::next() {}

bool NullIterator::is_done() 
{
    return true;
}

Base* NullIterator::current(){
    return NULL;
}

//PreOrderIterator Implementation
/*The PreOrderIterator has an additional stack data member, which we will 
use to keep tack of the collection iterators that we need to traverse. The 
rest of the functions will be written as follows
 */
PreOrderIterator::PreOrderIterator(Base* ptr) : Iterator(ptr) 
{
    this->self_ptr = ptr;
}
//Empty the stack (just in case we had something leftover from
//another run)
//Create an iterator for the Base* that we built the iterator for
//Initialize that iterator and push it onto the stack
void PreOrderIterator::first() 
{ 
    Iterator* it = this->self_ptr->create_iterator(); //initialize stack iterator
    
    while(!this->iterators.empty()) //empty stack
    {
        this->iterators.pop();
    }

    if (it) 
    {
        it->first();
        this->iterators.push(it);
    }

}

//Create an iterator for the item on the top of the stack
//Initialize the iterator and push it onto the stack
//As long as the top iterator on the stack is done, pop it off the
//stack and then advance whatever iterator is now on top of the stack
void PreOrderIterator::next() 
{ 
	Iterator* it = this->iterators.top()->current()->create_iterator();
	
	it->first();
	this->iterators.push(it);
	while(this->iterators.size() > 0 && this->iterators.top()->is_done())
	{
	    this->iterators.pop();
	    if(!iterators.empty()) 
	    {
	       // cout <<"oops" << endl;
	        this->iterators.top()->next();
	    }
	}
}

//Return true if there are no more elements on the stack to iterate
bool PreOrderIterator::is_done() 
{ 
	if (this->iterators.empty() )
	{
	    return true;   
	}
	else 
	{
	    return false;
	}
}

//Return the current for the top iterator in the stack
Base* PreOrderIterator::current() 
{ 
    if (!this->iterators.empty() && this->iterators.size() > 0)
    {
	    return this->iterators.top()->current();
    }
    else
    {
        return NULL;
    }
}
