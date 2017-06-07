#ifndef __MENU_CLASS__
#define __MENU_CLASS__

#include <iostream>
#include <vector>
#include "command.h"
#include "composite.h"

using namespace std;

class Menu {
	private:
		int history_index;
		vector<Command*> history;

	public:
		Menu() {
			//Base constructor to set up all necessary members
		};
		void execute();
		bool initialized();
		void add_command(Command* cmd);
		Command* get_command();
		void undo();
		void redo();
};

#endif //__MENU_CLASS__
