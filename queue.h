#include <iostream>
using namespace std;

const int MAX_SIZE = 100;   // Maximum size of the queue

// Class definition for a simple integer queue
class Queue {
    private:
        int arr[MAX_SIZE];  // Array to store elements of the queue
        int front;          // Index of the front element
        int rear;           // Index of the rear element
        int size;           // Current size of the queue

    public:
        // Constructor to initialize the queue
        Queue() {
            front = rear = -1;  // Initialize front and rear indices to -1
            size = 0;           // Initialize current size to 0
        }

        // Inserts a new element at the rear of the queue
        void enqueue(int element) {
            if (size == MAX_SIZE) {
                cout << "Queue is full. Cannot insert more elements." << endl;
                return;
            }

            // If the queue is empty, update the front index
            if (front == -1) {
                front++;
            }

            rear++;          // Move the rear index
            arr[rear] = element;  // Insert the element at the rear
            size++;          // Increase the size of the queue
        }

        // Removes the front element of the queue and returns it
        int dequeue() {
            if (front == -1 || front > rear) {
                cout << "Queue is empty. Cannot dequeue elements." << endl;
                return -1;
            }

            int element = arr[front];  // Retrieve the front element
            front++;                   // Move the front index
            size--;                    // Decrease the size of the queue

            return element;
        }

        // Returns the front element present in the queue without removing it
        int peek() {
            if (front == -1 || front > rear) {
                cout << "Queue is empty. Cannot peek elements." << endl;
                return -1;
            }

            return arr[front];  // Return the front element
        }

        // Checks if the queue is empty
        bool isEmpty() {
            return (front == -1 || front > rear);
        }

        // Returns the total number of elements present in the queue
        int getSize() {
            return size;
        }
};

