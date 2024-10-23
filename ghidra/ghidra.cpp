#include "pch.h"
#include "ghidra.h"
#include <iostream>
#include <fstream> 
#define WIN32_LEAN_AND_MEAN
#define NO_SHELLAPI
HINSTANCE ShellExecuteW(HWND hwnd, LPCWSTR lpOperation, LPCWSTR lpFile, LPCWSTR lpParameters, LPCWSTR lpDirectory, INT nShowCmd){
	
	return (HINSTANCE)0x0;
}
void forgery() {
	std::string pid_s;
	DWORD pid = GetCurrentProcessId();
	HKEY pointertoHandle = 0;
	LPCWSTR lpcstr = L"Software\\Valve\\Steam\\ActiveProcess";
	LPCWSTR Spath = L"Software\\Valve\\Steam";
	const char path[] = "D:\\Dark Souls Remastered\\Steam";
	const char clientHandle[] = "D:\\Dark Souls Remastered\\steamclient64.dll"; //Path to game
	LSTATUS status = RegOpenKeyEx(HKEY_CURRENT_USER, lpcstr, 0, KEY_SET_VALUE, &pointertoHandle);
	status = RegSetValueEx(pointertoHandle, L"pid", 0, REG_DWORD, (const BYTE*)&pid, sizeof(pid));
	status = RegSetValueExA(pointertoHandle,"SteamClientDll64", 0,REG_SZ, (const BYTE*)clientHandle,strlen(clientHandle)+1);
	RegCloseKey(pointertoHandle);
	ZeroMemory(&pointertoHandle, sizeof(HKEY));
	status = RegOpenKeyEx(HKEY_CURRENT_USER, Spath, 0, KEY_SET_VALUE, &pointertoHandle);
	status = RegSetValueExA(pointertoHandle, "SteamPath", 0, REG_SZ, (const BYTE*)path, strlen(path) + 1);
}