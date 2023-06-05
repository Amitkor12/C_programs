#include <iostream>
using namespace std;

class IMemoryManagement
{
public:
    static IMemoryManagement* GetInstance(void) { return m_pInstance; }
    static IMemoryManagement* m_pInstance;
};

int main()
{
    IMemoryManagement imemobj;
    imemobj.GetInstance;
    // cout<<;
}