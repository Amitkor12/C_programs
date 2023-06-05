#include <stdio.h>

// Base class
typedef struct {
    int x;
} Base;

void base_initialize(Base* base, int x) {
    base->x = x;
}

void base_print(Base* base) {
    printf("Base: x = %d\n", base->x);
}

// Derived class
typedef struct {
    Base base;
    int y;
} Derived;

void derived_initialize(Derived* derived, int x, int y) {
    base_initialize(&derived->base, x);
    derived->y = y;
}

void derived_print(Derived* derived) {
    base_print(&derived->base);
    printf("Derived: y = %d\n", derived->y);
}

int main() {
    Derived derived;
    derived_initialize(&derived, 10, 20);
    derived_print(&derived);

    return 0;
}
