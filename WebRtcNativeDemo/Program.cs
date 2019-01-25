using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WebRtcNativeDemo
{
    class Program
    {
        private static SignalChannel signal;
        private static SignalProcesser signalProcesser;

        static void Main(string[] args)
        {
            var signal= SignalChannel.Create();
            signal.Login();

            signalProcesser = new SignalProcesser(signal);
            signalProcesser.Test();
        }

    }
}
