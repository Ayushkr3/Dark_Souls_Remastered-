#pragma once
#define WIN32_LEAN_AND_MEAN
#define NO_SHELLAPI
#include <Windows.h>
#ifdef API_EXPORT
#define EXP __declspec(dllexport)
#else
#define EXP __declspec(dllimport)
#endif
extern "C" EXP HINSTANCE ShellExecuteW(HWND hwnd, LPCWSTR lpOperation, LPCWSTR lpFile, LPCWSTR lpParameters, LPCWSTR lpDirectory, INT nShowCmd);
void forgery();