#include <iostream>
#include <sstream>
#include <cmath>
#include "c-multi.h"
#include "mperrors.h"
#include "mpfields.h"
#include "mpconsts.h"

using namespace std;

void command_list() {
	cout << "Full Commands List \n"
		<< "Command		Parameter	Action \n"
		<< "-------------------------------------------------------\n"
		<< "help		<void>		show full commands list\n"
		<< "exit		<void>		exit GCS\n"
		<< "quit		<void>		exit GCS\n"
		<< "connect		<uavID>		connecting to UAV #ID\n"
		<< endl;
}


int connect2UAV(int uavID, bool TCPIP) {
	long retVal = 0;
	long value = 0;

	do {
		retVal = mpCreate(uavID);
		if (retVal != MP_OK) {
			cout << "Error: Cannot initializing UAV# " << uavID << endl;
			break;
		}

		retVal = mpInitLink(uavID, "");
		if (retVal != MP_OK) {
			cout << "Error: Cannot connect UAV# " << uavID << endl;
			break;
		}
	} while (false);

	return retVal;
}