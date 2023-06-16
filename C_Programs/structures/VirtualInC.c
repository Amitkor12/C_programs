#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void (*sayHello)(void);
    char* (*RetrieveMemBlock)(size_t memSize, const char* file, unsigned int line); 
} Base;

typedef struct {
    Base base;
    void (*sayHello)(void);
    char* (*RetrieveMemBlock)(size_t memSize, const char* file, unsigned int line);
} Derived;

void base_sayHello(void) {
    printf("Hello from the base class!\n");
}

void derived_sayHello(void) {
    printf("Hello from the derived class!\n");
}

char* RetrieveMemBlock(size_t memSize, const char* file, unsigned int line)
{
	return malloc((memSize)*sizeof(char)) ; //new char[memSize];
}

int main() {
    Derived derived;
    derived.base.sayHello = base_sayHello;          //through obj of derived class assigning function to base class
    derived.base.sayHello();                        //calling the base function
    derived.base.sayHello = derived_sayHello;       //chnaging the base function with derived function 
    // derived.base.sayHello();
    // derived.sayHello = derived_sayHello;
    // derived.sayHello();
    // derived.base.sayHello();

    //TO DO:  call the retriev function 

    Base* basePtr = (Base*)&derived;        //pointer of base class to call base functon 
    basePtr->sayHello();  // Calls the derived class's sayHello

    return 0;
}