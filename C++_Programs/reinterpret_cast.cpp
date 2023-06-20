#include<iostream>

int main()
{
int x = 42;
int* px = &x;  // px is a pointer to int

// Now let's reinterpret px as a void**
void** pvoid = reinterpret_cast<void**>(&px);

// We can use pvoid to manipulate the address as a void** type
*pvoid = nullptr;

// If we access x again using px, the value will be affected
std::cout << x << std::endl;  // Output: 0
}

