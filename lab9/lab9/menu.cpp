#include <iostream>
#include <vector>
#include "command.h"
#include "menu.h"

using namespace std;


void Menu::execute() {
	//Prints the current commands value (based on history_index), if no commands exist
	//print 0 by default
	if(history.empty())
	{
	    cout << "0" << endl;
	}
	else
	{
	    cout << history.at(history_index)->execute() << endl;
	}
}


bool Menu::initialized() {
	//Return true if the history has been primed with a single op instruciton
	//This is necessary because that is the base of a calculation
	if(history.empty())
	{
	    return false;
	}
	else
	{
	    return true;
	}
}

void Menu::add_command(Command* cmd) {
	//Adds a command to history in the appropriate posiiton (based on history_index)
	int last = history.size() - 1;
	// cout << "ADD [";
	if(history_index == last)
	{
		// cout << "ADDING]";
    	history.push_back(cmd);
    	history_index++;
	}
	else if(history.size() == 0)
	{
		// cout << "PRIME]";
	    history.push_back(cmd);
	}
	else
	{
	    history.at(history_index + 1) = cmd;
	    history_index++;
	}
	// cout << " END ADD" << endl;
	
}

Command* Menu::get_command() {
	//Returns the command in history we are currently referring to (based on history_index)
	// cout << "GETCMD" << endl;
	return history.at(history_index);
}

void Menu::undo() {
    history_index--; //gives the last item to execute
	//Moves to the last command in history (if possible)
	return;
}

void Menu::redo() {
	// Moves to the next command in history (if possible)
// 	int last = history.size() - 1;
// 	cout << "REDO" << endl;
// 	if (history_index + 1 > last)
// 	{
// 		cout << "END REDO" << endl;
// 		return; //  the next command in history goes out of vector range
// 	}
// 	else 
// 	{
// 		cout << "END REDO" << endl;
// 		history.at(history_index)->execute(); //execute if valid
// 	}
    // if(history.size() >= 3)
    // {
    //     history_index++;
    // }
    int last = history.size() - 1;
    
    if(history_index == last)	   
    {
        return;
    }
    else
    {
        history_index++;
    }
    
    return;
}