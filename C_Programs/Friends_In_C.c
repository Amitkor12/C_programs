#include <stdio.h>

struct Friend;                                          // Forward declaration of the Friend structure

typedef struct MainClass{
    int data;
    void (*friendFunction)(struct Friend*);
} mainclass;                                            // Structure representing the main class

typedef struct Friend {
    int data;
    void (*mainFunction)(mainclass*);
} friends;                                               // Structure representing the friend class

void mainClassFunction(mainclass* main) {
    printf("MainClass function called. Data: %d\n", main->data);
}                                                           // Function defined in the MainClass

void friendFunction(friends* main) {
    printf("Friend function called. Data: %d\n", main->data);
}                                                           // Function defined in the Friend class

mainclass createMainClass(int data, friends* friendInstance) {
    mainclass main;
    main.data = data;
    main.friendFunction = (void (*)(struct Friend*))friendFunction;
    friendInstance->mainFunction = (void (*)(mainclass*))mainClassFunction;
    return main;
}                                                                      // Function to create instances of the main class

int main() {
    friends friendInstance;

    mainclass mainInstance = createMainClass(42, &friendInstance);

    friendInstance.mainFunction(&mainInstance);                       // Access main class function through friend class

    mainInstance.friendFunction(&friendInstance);                        // Access friend class function through main class

    return 0;
}
