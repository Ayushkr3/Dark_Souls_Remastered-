// steamclient64.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "steamclient64.h"
#include <string>
#include <cstdint>

// This is an example of an exported variable
//STEAMCLIENT64_API int nsteamclient64=0;

// This is an example of an exported function.
//STEAMCLIENT64_API int fnsteamclient64(void)
//{
//    return 0;
//}
int*(*iptr)();
void* ptr;
void* vptr;
void** pptr;
char* cpptr;
char lang[8] = "english";
char Name[6] = "Kr3";
ISteamUser* User = nullptr;
SteamPipe* pipe = nullptr;
Username* un = nullptr;
// This is the constructor of a class that has been exported.
void*** GetData(int b1,int b2,int b3,char* Interface) {
	if (strcmp("SteamUser", Interface)) {
		if (User == nullptr) {
			User = new ISteamUser;
			pipe = new SteamPipe;
			un = new Username;
			User->func_1 = (int*(*)())function_1;
			User->func_2 = function_2;
			User->func_3 = function_3;
			User->func_5 = blank;
			pipe->func_1 = (int*(*)())function_1;
			pipe->func_2 = function_2;
			pipe->func_4 = &GetLanguage;
			pipe->func_3 = &GetSteamUserName;
		}
		//ptr = (void*)(User->func_1); //cast to pointer
		iptr = User->func_1; //change to pointer to pointer
		pipe->ISteamUserPointer = (&GetSteamUserName); //cast to pointer to pointer
		un->pipeptr = (void**)&pipe->ISteamUserPointer;
		//cpptr = ((char*)pptr)-0x10; //cast to char to put reduce 16 byte (reducing in void change to 40 bytes)
		//pptr = (void**)cpptr; //rechange to void 
		return &(un->pipeptr); //return pointer to pointer
	}
	return nullptr;
}
int function_1() {
	return 0;
}
int blank() {
	return 6;
}
AppId* function_2() {
	AppId* ap = new AppId;
	return ap;
}
char* GetLanguage() {
	return lang;
}
int function_3() {
	return 9;
}
char* GetSteamUserName() {
	return Name;
}