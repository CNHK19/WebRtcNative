#pragma once
#ifdef WEBRTCNATIVE_EXPORTS

#define TEXPORT  extern "C"  __declspec(dllexport)

#else

#define TEXPORT __declspec(dllexport)

#endif // __cplusplus

#pragma  comment(lib,"libwebrtc_full.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"strmiids.lib")
#pragma comment(lib,"Secur32.Lib")
#pragma comment(lib,"wmcodecdspuuid.lib")
#pragma comment(lib,"dmoguids.lib")

#pragma comment(lib,"crypt32.lib")
#pragma comment(lib,"iphlpapi.lib")
#pragma comment(lib,"amstrmid.lib")
#pragma comment(lib,"msdmo.lib")
#pragma comment(lib,"Strmiids.lib")



TEXPORT void __stdcall InitliazeEnvriment();

TEXPORT HANDLE __stdcall InitliazePeerConnection();
