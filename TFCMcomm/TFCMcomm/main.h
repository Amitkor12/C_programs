#ifndef main_H
#define main_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#define DLL_EXPORT __declspec(dllexport)

namespace dllspec{
    class dllclass{
    public:
//        static DLL_EXPORT int num(int a);  //test function
        static DLL_EXPORT int OpenSerialPort();
        static DLL_EXPORT int ConfigSerialPort();
        static DLL_EXPORT int SetTimeouts();
        static DLL_EXPORT int MsgSend(char* msg);
        static DLL_EXPORT int MsgReceive();
//        static DLL_EXPORT int CloseSerialPort();
    };
}

#endif // main_H
