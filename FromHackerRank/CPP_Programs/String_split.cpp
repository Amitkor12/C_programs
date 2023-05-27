#include <cmath>
#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    // char str3[10];
    string str,str1,str2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        for(int j=0;j<str.length();j++)
        {
            if(j % 2 == 0)
            {
                str1 += str[j];
            }
            else{
                str2 +=str[j];
            }
        }
        cout << str1 << " " << str2 <<endl;
        // memset(str3,0,sizeof(str3));
        str1.clear();
        str2.clear();
    }    
    return 0;
}