#include <iostream>
using namespace std;

class Queue{
    private:
        int myQueue[10];
        int front, rear, N;

    public:
    Queue(){
        front = 0;
        rear = 0;
        N = 0;
        }

    void insert(int j) {
    myQueue[rear++] = j; // Add item and increment rear
    if (rear > 9)        // Wrap around if rear goes out of bounds
        rear = 0;

    N++;                 // Increase the item count
}
int remove() {
    int itemremoved = myQueue[front++]; // Remove item and increment front
    if (front > 9)                      // Wrap around if front goes out of bounds
        front = 0;

    N--;                                // Decrease the item count
    return itemremoved;
}
int peekFront() {
    return myQueue[front];
}
bool isEmpty() {
    return (N == 0);
}

}