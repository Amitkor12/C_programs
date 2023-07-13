#include <iostream>
#include "main.h"
#include <conio.h>

using namespace std;
//using namespace dllspec;


#define MAX_PORT_LENGTH 20
#define COM_size        6


int main()
{
    printf("Wellcome To DLL Test\n");

    int num;
    cout << "Enter value 0 for Recieve" << endl << "Enter value 1 for Transmit" <<endl;
//    printf("Enter value 0 for Recieve\nEnter value 1 for Transmit\n");
//    scanf("%d\n",num);
    cin >> num;


//    char port[MAX_PORT_LENGTH];
//    char prefix[] = "\\\\\\\\.\\\\";
//    char port_argument[COM_size];  // Replace with your desired port argument
//    scanf("%s",port_argument);
//
//    // Concatenate the prefix and port_argument
//    snprintf(port, sizeof(port), "\"%s%s\"", prefix, port_argument);
//
//    printf("Port: %s\n", port);

    int ret;
    ret = dllspec::dllclass::OpenSerialPort();
    if(ret!=0)
    {
     cout << "connected successful"<<endl;
    }

    ret = dllspec::dllclass::ConfigSerialPort();
    if(ret!=0)
    {
        cout <<"Configured"<<endl;
    }


    ret = dllspec::dllclass::SetTimeouts();
    if(ret!=0)
    {
        cout<<"Timeout Setting Done"<<endl;
    }


    if(num == 1)
    {
        while(1)
        {
            char msg[6];
            scanf("%s",msg);
            ret = dllspec::dllclass::MsgSend(msg);
        }
    }

    if(num == 0)
    {
        ret = dllspec::dllclass::MsgReceive();
    }

//    ret = dllspec::dllclass::CloseSerialPort();
//    if(ret !=0 )
//    {
//        cout<<"connection closed"<<endl;
//    }

    getch();
    return 0;
}
