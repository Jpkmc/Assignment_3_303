#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main() {
  // Declare a string to store the infix expression
  string infixExp;

  // Prompt the user to enter an infix expression and read it
  cout << "Enter infix expression: ";
  getline(cin, infixExp);

  // Check if the infix expression is not balanced or is empty
  if (!isBalanced(infixExp) || infixExp == " " || infixExp == "") {
    cout << "Invalid Expression" << endl;
  } 
  else {
    // Convert the valid infix expression to postfix
    string postfixExp = infixToPostfix(infixExp);
    cout << "Postfix expression: " << postfixExp << endl;
  }

  // Create a queue object
  Queue q;

  // Enqueue elements into the queue
  q.enqueue(1);   // Insert element 1 at rear
  q.enqueue(2);   // Insert element 2 at rear
  q.enqueue(3);   // Insert element 3 at rear

  // Output the size of the queue
  cout << endl << "Size of queue: " << q.getSize() << endl; // Output: 3

  // Output the front element of the queue
  cout << endl << "Front element: " << q.peek() << endl; // Output: 1

  // Dequeue an element from the queue and output the removed element
  cout << endl << "Removed element: " << q.dequeue() << endl; // Output: 1

  // Output the updated size of the queue
  cout << endl << "Size of queue: " << q.getSize() << endl; // Output: 2

  // Enqueue another element into the queue
  q.enqueue(4);   // Insert element 4 at rear

  // Output the front element of the updated queue
  cout << endl << "Front element: " << q.peek() << endl; // Output: 2

  // Output whether the queue is empty or not
  cout << endl << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Output: No

  // End the program
  return 0;
}
