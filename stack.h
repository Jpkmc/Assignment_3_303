#ifndef stack_h
#define stack_h

#include <string>
using namespace std;

// Declaration of a template class for a custom stack
template <typename T>
class CustomStack {
private:
    T data[100];  // Array to store stack elements
    int top;       // Index of the top element

public:
    CustomStack(); // Constructor to initialize the stack
    void push(T value); // Push a value onto the stack
    T pop();           // Pop and return the top element from the stack
    T peek();          // Return the top element without removing it
    bool isEmpty();    // Check if the stack is empty
};

// Function to check if a character is an operand
bool isOperand(char ch);

// Function to check if a character is an operator
bool isOperator(char ch);

// Function to determine the precedence of an operator
int precedence(char op);

// Function to convert an infix expression to a postfix expression
string infixToPostfix(string exp);

// Function to check if parentheses in an expression are balanced
bool isBalanced(string exp);

#endif
