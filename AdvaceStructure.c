#include <stdio.h>

typedef struct {
    // struct IMemoryManagement* (*GetInstance)(void);
    // struct IMemoryManagement* m_pInstance;
IMemoryManagement* m_pInstance;
IMemoryManagement* (*GetInstance)(void);
// {
//     return m_pInstance;
// }
} IMemoryManagement;




int main() 
{
    IMemoryManagement imemMan;                      // Create an instance of IMemoryManagement

    // imemMan.GetInstance = GetInstance;
    // imemMan.m_pInstance = &imemMan;

    // Access the instance using GetInstance()
    IMemoryManagement* pInstance = imemMan.GetInstance();

    // Print the address of the instance
    printf("Address of IMemoryManagement instance: %d\n", pInstance);

    return 0;
}