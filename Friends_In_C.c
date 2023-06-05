#include <stdio.h>

// Forward declaration of the Friend structure
struct Friend;

// Structure representing the main class
typedef struct {
    int data;
    void (*friendFunction)(struct Friend*);
} MainClass;

// Structure representing the friend class
typedef struct Friend {
    int data;
    void (*friendFunction)(MainClass*);
} Friend;

// Function defined in the MainClass
void mainClassFunction(MainClass* main) {
    printf("MainClass function called. Data: %d\n", main->data);
}

// Function defined in the Friend class
void friendFunction(MainClass* main) {
    printf("Friend function called. Data: %d\n", main->data);
}

// Function to create instances of the main class
MainClass createMainClass(int data, Friend* friendInstance) {
    MainClass main;
    main.data = data;
    main.friendFunction = (void (*)(struct Friend*))friendFunction;
    friendInstance->friendFunction = (void (*)(MainClass*))mainClassFunction;
    return main;
}

int main() {
    Friend friendInstance;
    MainClass mainInstance = createMainClass(42, &friendInstance);

    // Access main class function through friend class
    friendInstance.friendFunction(&mainInstance);

    // Access friend class function through main class
    mainInstance.friendFunction(&friendInstance);

    return 0;
}
