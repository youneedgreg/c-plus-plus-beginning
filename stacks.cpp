#include <iostream>
using namespace std;

class StackX{
    private:
        int myStack[10];
        int top = 0;
    
    public:
        void push(int j){
            myStack[++top] = j;
        }
        double() {
            return myStack[top--];
        }
        double() {
            return myStack[top];
        }

}

int main() {
    StackX theStack; // Create a new stack
    theStack.push(20);
    theStack.push(40);
    theStack.push(60);
    theStack.push(80);

        int i = 4;
    while (i > 0) {
        double value = theStack.pop();
        i--;
        cout << value << " ";
    }

        cout << endl;
    return 0;
}

}