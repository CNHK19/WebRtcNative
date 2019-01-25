using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WebRtcNativeDemo
{
    class SignalChannel
    {
        private SignalChannel()
        {

        }
        internal static SignalChannel Create()
        {





            return new SignalChannel();
        }


        public event Action<string> OnMessage;

        internal void Login()
        {
            return;
        }
    }
}
