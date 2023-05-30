#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a,int *b) {

    // cout << a << endl;
    *a = *a + *b;
    *b = (*a - *b) - *b;

    if(*b < 0)
    {
        *b = -(*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;

    update(pa, pb);

    // cout << pa << endl;
    cout << a <<"\n" << b <<endl;
    return 0;
}