/* ================================================================
   Project Name:	MPGCS
   Entry Point:  	MPGCS.cpp (This File)
   Author:       	Kevin Xu
   Contact: 		kevin@dronedeliverycanada.ca
   Data:    		2017/07/11
   ----------------------------------------------------------------
   Copyright 2017, Drone Delivery Canada Inc. All right reserved
   ================================================================
*/

#include <iostream>
#include <sstream>
#include <string>
#include "actions.h"
#include "stdafx.h"
#include "mpfields.h"
#include "c-multi.h"

using namespace std;


void parser() {
	
	while (true)
	{
		cout << "> ";
		stringstream commandBuf;
		commandBuf  cin;
		string paramBuf0;
		string paramBuf1;
		getline(commandBuf, paramBuf0);
		if (commandBuf.fail()) {
			cout << "Input error" << endl;
		}
// ---------------------------- help ----------------------------
		if (paramBuf0.compare("help") == 0) command_list();

// ---------------------------- exit ----------------------------
		else if ((paramBuf0.compare("exit") == 0)
			|| (paramBuf0.compare("quit") == 0)) {
			break;
		}

// --------------------------- connect --------------------------
		else if (paramBuf0.compare("connect") == 0) {
			getline(commandBuf, paramBuf1);
			if (commandBuf.fail()) {
				cout << "Error: 0" << endl;
			}
			if (commandBuf.eof()) {
				cout << "Error: 1" << endl;
			}
			continue;
		}

		else {
			cout << "Error: illegal command" << endl;
			continue;
		}
	}
}


int main()
{
	cout << "This is MP-GCS V0.1" << endl;
	cout << "Enter \"help\" for full command list" << endl;
	parser();
    return 0;
}

