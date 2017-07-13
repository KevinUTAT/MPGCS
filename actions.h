#pragma once
#include <string>

// show all commands
void command_list();

//This will initializing an UAV and try to connect to it
// return MP_OK (0) for successfully connected
int connect2UAV(int uavID, bool TCPIP = false);
