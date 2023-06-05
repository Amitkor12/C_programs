#include <iostream>

using namespace std;

class Sum
{
    private:
        int a,b;
    public:
        Sum(): a(4),b(6){};                       //initialization of memeber variable though constructor -- initilization list 
        int add()
        {
            return (a + b);
        }
};

int main()
{
    Sum sum;
    cout << sum.add() <<endl;
}