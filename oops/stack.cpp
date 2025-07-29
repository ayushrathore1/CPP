#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Stack {
private:
    int stack[MAX_SIZE];  // Private: Can't be accessed directly
    int top;              // Private: Tracks the top

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1;
    }

    // Push an item onto the stack
    void push(int item) {
        if (top == MAX_SIZE -1) {
            cout << "OVERFLOW" << endl;
            return;
        }
        top++;
        stack[top] = item;
        cout << item << " item inserted" << endl;
    }

    // Pop the top item from the stack
    void pop() {
        if (top == -1) {
            cout << "UNDERFLOW" << endl;
            return;
        }
        int item = stack[top];
        top--;
        cout << item << " item deleted" << endl;
    }

    // Display the stack elements (bottom to top)
    void display() {
        if (top == -1) {
            cout << "The stack is empty" << endl;
            return;
        }
        else
        {
            for (int i = 0; i <= top; i++) 
            {
                cout << stack[i] << " ";
            }
            cout << "\n";
        }

       

        // Optional: Display from top to bottom
        // cout << "Stack elements (top to bottom): ";
        // for (int i = top; i >= 0; i--) {
        //     cout << stack[i] << " ";
        // }
        // cout << endl;
    }


   
};

int main() {
    Stack s;  // Create a stack object

    // Test push
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();

    // Test pop
    s.pop();
    s.pop();
    s.display();

    // Test overflow
    s.push(50);
    s.push(60);
    s.push(70);  // Triggers OVERFLOW
    s.push(70);  // Triggers OVERFLOW
   

  

    // Test underflow
    for (int i = 0; i < 5; i++) s.pop();  // Will underflow after emptying

    return 0;
}
