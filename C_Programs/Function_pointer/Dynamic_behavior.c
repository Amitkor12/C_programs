#include <stdio.h>

// Structure representing a mathematical operation
typedef struct {
    int (*operation)(int, int);  // Function pointer for the operation
    int operand1;
    int operand2;
} MathOperation;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
    MathOperation operation1;
    operation1.operation = add;
    operation1.operand1 = 5;
    operation1.operand2 = 3;
    
    MathOperation operation2;
    operation2.operation = subtract;
    operation2.operand1 = 10;
    operation2.operand2 = 7;
    
    MathOperation operation3;
    operation3.operation = multiply;
    operation3.operand1 = 8;
    operation3.operand2 = 4;

    printf("Result 1: %d\n", operation1.operation(operation1.operand1, operation1.operand2));
    printf("Result 2: %d\n", operation2.operation(operation2.operand1, operation2.operand2));
    printf("Result 3: %d\n", operation3.operation(operation3.operand1, operation3.operand2));
    
    return 0;
}
