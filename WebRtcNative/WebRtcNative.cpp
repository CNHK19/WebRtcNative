// WebRtcNative.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


#include "webrtc/media/base/videocapturer.h"
#include "webrtc//modules/video_capture/video_capture_factory.h"
#include "webrtc/media/engine/webrtcvideocapturerfactory.h"

#include  "WebRtcNative.h"
#include "webrtc/api/peerconnectioninterface.h"


#include "webrtc/rtc_base/ssladapter.h"
#include "webrtc/rtc_base/win32socketinit.h"
#include "webrtc/rtc_base/win32socketserver.h"
namespace Native
{
	bool CFG_quality_scaler_enabled_ = false;

	void InitializeSSL()
	{
		rtc::EnsureWinsockInit();
		rtc::InitializeSSL(NULL);
	}

	void CleanupSSL()
	{
		rtc::CleanupSSL();
	}
}



TEXPORT int __stdcall InitliazePeerConnection()
{
	cricket::WebRtcVideoDeviceCapturerFactory factory;
	std::unique_ptr<cricket::VideoCapturer> capturer_internal = factory.Create(cricket::Device("sss", 0));

	std::vector<std::string> device_names;
	{
		std::unique_ptr<webrtc::VideoCaptureModule::DeviceInfo> info(webrtc::VideoCaptureFactory::CreateDeviceInfo());
		if (info)
		{
			int num_devices = info->NumberOfDevices();
			for (int i = 0; i < num_devices; ++i)
			{
				const uint32_t kSize = 256;
				char name[kSize] = { 0 };
				char id[kSize] = { 0 };
				if (info->GetDeviceName(i, name, kSize, id, kSize) != -1)
				{
					device_names.push_back(name);

					std::printf(name);
					std::printf("\n");


				}
			}
		}
	}


	return 19;
}

TEXPORT void __stdcall InitliazeEnvriment()
{

}

