#include <iostream>
using namespace std;

class Queue {
private:
    int myQueue[10]; // Fixed-size array to hold the queue elements
    int N;           // Number of elements in the queue

public:
    Queue() {
        N = 0; // Initialize the queue size to 0
    }

    void insert(int j) { // Insert item in sorted order
        int i;
        if (N == 10) { // Check for overflow
            cout << "Queue is full, cannot insert " << j << endl;
            return;
        }
        if (N == 0) { // If no items in the queue
            myQueue[N++] = j; // Insert at index 0
        } else { // If items exist
            for (i = N - 1; i >= 0; i--) { // Start at the end
                if (j > myQueue[i]) { // If new item is larger
                    myQueue[i + 1] = myQueue[i]; // Shift items upwards
                } else { // Order is okay
                    break; // Stop shifting
                }
            }
            myQueue[i + 1] = j; // Insert the new item
            N++; // Increment the count of elements
        }
    }

    int remove() { // Remove and return the minimum item
        if (N == 0) { // Check for underflow
            cout << "Queue is empty, cannot remove" << endl;
            return -1; // Error value
        }
        return myQueue[--N]; // Remove the last element (minimum item)
    }

    int peek() { // Peek at the minimum item
        if (N == 0) { // Check if the queue is empty
            cout << "Queue is empty, nothing to peek" << endl;
            return -1; // Error value
        }
        return myQueue[N - 1]; // Return the last element
    }

    bool isEmpty() { // Check if the queue is empty
        return (N == 0);
    }
};

int main() {
    Queue theQueue; // Create a queue object
    theQueue.insert(40); // Insert 4 items
    theQueue.insert(20);
    theQueue.insert(23);
    theQueue.insert(14);

    theQueue.remove(); // Remove 3 items
    theQueue.remove();
    theQueue.remove();

    theQueue.insert(7);  // Insert 4 more items
    theQueue.insert(66);
    theQueue.insert(72);
    theQueue.insert(9);

    while (!theQueue.isEmpty()) { // While the queue is not empty
        int n = theQueue.remove(); // Remove and display each item
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
