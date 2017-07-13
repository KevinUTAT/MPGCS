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
		string commandBuf;
		unsigned uavID;
		string paramBuf0;
		string paramBuf1;
		cin >> commandBuf;
		if (commandBuf.empty()) {
			cin.clear();
			cout << "Error: Empty Command" << endl;
		}

// ---------------------------- help ----------------------------
		if (commandBuf.compare("help") == 0) command_list();

// ---------------------------- exit ----------------------------
		else if ((commandBuf.compare("exit") == 0)
			|| (commandBuf.compare("quit") == 0)) {
			break;
		}

// --------------------------- connect --------------------------
		else if (commandBuf.compare("connect") == 0) {
			cin >> uavID;
			connect2UAV(uavID);
			continue;
		}

// -------------------------- readfield -------------------------
		else if (commandBuf.compare("read") == 0) {
			int fieldID;
			cin >> fieldID;

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

