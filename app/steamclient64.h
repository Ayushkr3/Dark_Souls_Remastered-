// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the STEAMCLIENT64_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// STEAMCLIENT64_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STEAMCLIENT64_EXPORTS
#define STEAMCLIENT64_API __declspec(dllexport)
#else
#define STEAMCLIENT64_API __declspec(dllimport)
#endif
struct AppId {
	int id = 0;
};
class ISteamUser {
public:
	int balls;
};

ISteamUser* User;
extern "C" STEAMCLIENT64_API void*** GetData(int b1, int b2, int b3, char* Interface);
extern "C" STEAMCLIENT64_API AppId* GetOtherData();
extern "C" STEAMCLIENT64_API void Test();
//STEAMCLIENT64_API int fnsteamclient64(void);
