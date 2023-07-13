#include "main.h"

using namespace std;

HANDLE hSerial;

namespace dllspec{
        // Test Program
//    int dllclass::num(int a)
//    {
//        return a+a;
//    }

int dllclass::OpenSerialPort()
{
    // Open the serial port
//    printf("port in dll:%s\n",port);
    hSerial = CreateFile("\\\\.\\COM14", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hSerial == INVALID_HANDLE_VALUE) {
        printf("Unable to open the serial port\n");
        return 0;
    }
    else{
        return 1;
    }
}


int dllclass::ConfigSerialPort()
{
    // Configure the serial port
//    HANDLE hSerial;
    DCB dcbSerialParams;
    if(!GetCommState(hSerial, &dcbSerialParams))
    {
        return 0;
    }
    else{
        dcbSerialParams.BaudRate = CBR_9600;
        dcbSerialParams.ByteSize = 8;
        dcbSerialParams.StopBits = ONESTOPBIT;
        dcbSerialParams.Parity = NOPARITY;
    }
//    dcbSerialParams.BaudRate = CBR_9600;
//    dcbSerialParams.ByteSize = 8;
//    dcbSerialParams.StopBits = ONESTOPBIT;
//    dcbSerialParams.Parity = NOPARITY;
    if(SetCommState(hSerial, &dcbSerialParams))
    {
        return 1;
    }
}

int dllclass::SetTimeouts()
{
    // Set the timeouts
//    HANDLE hSerial;
    COMMTIMEOUTS timeouts;

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;
    if(SetCommTimeouts(hSerial, &timeouts))
    {
        return 1;
    }
}

int dllclass::MsgReceive()
{
//    HANDLE hSerial;
    // Receive the message
    char message[6];  // Assuming the message length is 5 characters
    DWORD bytesRead;
    while(1){
    if (!ReadFile(hSerial, message, 5, &bytesRead, NULL)) {
        printf("Unable to receive the message\n");
        CloseHandle(hSerial);
        return 1;
    }
    }
    return 0;
}

int dllclass::MsgSend(char* msg)
{
    // Send the message
//    char message[] = "hello";
    DWORD bytesWritten;
    //while(1){
    WriteFile(hSerial, msg, strlen(msg), &bytesWritten, NULL);
    // }
}

//int dllclass::CloseSerialPort()
//{
////    HANDLE hSerial;
//    // Close the serial port
//    if(CloseHandle(hSerial))
//    {
//        return 1;
//    };
//}
}
