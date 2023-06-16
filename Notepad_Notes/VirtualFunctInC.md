# Virtual Function In C

* In C++, you can create virtual functions using the `virtual` keyword. However, C does not natively support virtual functions like C++.
* C is a procedural programming language and does not have built-in support for object-oriented concepts like classes and virtual functions.

* In C, you can achieve a similar **effect to virtual functions** by using **function pointers**.
* **Function pointers** allow you to store the *address of a function* and call it later.
* By *dynamically assigning function pointers at runtime*, you can achieve a similar *behavior to virtual functions.*

Here's an example of how you can simulate virtual functions in C using function pointers:

```c
#include <stdio.h>

typedef struct {
    void (*sayHello)(void);
} Base;

typedef struct {
    Base base;
    void (*sayHello)(void);
} Derived;

void base_sayHello(void) {
    printf("Hello from the base class!\n");
}

void derived_sayHello(void) {
    printf("Hello from the derived class!\n");
}

int main() {
    Derived derived;
    derived.base.sayHello = base_sayHello;
    derived.sayHello = derived_sayHello;

    Base* basePtr = (Base*)&derived;
    basePtr->sayHello();  // Calls the derived class's sayHello

    return 0;
}
```

In the given code snippet:

```c
Base* basePtr = (Base*)&derived;
basePtr->sayHello();
```

`Base* basePtr = (Base*)&derived;`

This line creates a pointer `basePtr` of type `Base*`. The `&derived` takes the address of the `derived` object, which is of type `Derived`. By casting it to `(Base*)`, we tell the compiler to treat the address of `derived` as a pointer to `Base`. This is possible because the `Base` struct is the first member of the `Derived` struct. So, by using this pointer, we can access the `Base` part of the `Derived` object.

`basePtr->sayHello();`

Since `basePtr` is a pointer to `Base`, we can use the arrow operator (`->`) to access the members of the `Base` struct. In this case, we access the `sayHello` function pointer. By using the arrow operator, it is equivalent to `(*basePtr).sayHello()`, where we dereference `basePtr` and call the function pointed to by `sayHello`. Since `derived` is a `Derived` object, and we have overridden the `sayHello` function in the derived struct, the function called will be the one defined in the derived class.

In summary, these two steps allow us to invoke the `sayHello` function of the derived class through a pointer to the base class. This is an example of achieving polymorphism and mimicking the behavior of virtual functions in C.

* In this example, we define a base struct `Base` with a function pointer `sayHello` that points to the base class's implementation of the function.
* We then define a derived struct `Derived` that extends `Base` and adds its own implementation of the `sayHello` function.
* In the `main` function, we create an instance of `Derived` and assign its function pointers accordingly.
* Finally, we call the `sayHello` function through a `Base` pointer, which will invoke the derived class's implementation due to the function pointer assignment.

*Note:* that this approach requires manual management of function pointers and doesn't provide the same level of abstraction and polymorphism as virtual functions in C++.
