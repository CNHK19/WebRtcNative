using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace WebRtcNativeDemo
{
    class SignalProcesser
    {
        private SignalChannel signal;

        public SignalProcesser(SignalChannel signal)
        {
            this.signal = signal;
            signal.OnMessage += Signal_OnMessage;
        }

        private void Signal_OnMessage(string obj)
        {
            //TODO: 处理消息
        }



        public void Test()
        {
            var handle = InitliazePeerConnection();
            Console.WriteLine(handle);
            Console.ReadLine();
        }



        [DllImport(@"WebRtcNative.dll", EntryPoint = "InitliazePeerConnection", SetLastError = true, CharSet = CharSet.Ansi, ExactSpelling = false, CallingConvention = CallingConvention.StdCall)]
        extern static int InitliazePeerConnection();

    }





}
