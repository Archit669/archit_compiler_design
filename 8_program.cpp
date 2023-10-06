#include <iostream>
#include <vector>

using namespace std;

class Stack {
    public:
    vector<int> items;

    bool isEmpty() {
        return items.empty();
    }

    void push(int item) {
        items.push_back(item);
    }

    int pop() {
        if (!isEmpty()) {
            int top = items.back();
            items.pop_back();
            return top;
        } else {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
    }

    int peek() {
        if (!isEmpty()) {
            return items.back();
        } else {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
    }

    int size() {
        return items.size();
    }
};

int main() {
    Stack stack;

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack after pushing 1, 2, and 3: ";
    for (int item : stack.items) {
        cout << item << " ";
    }
    cout << endl;

    cout << "Stack size: " << stack.size() << endl;
    cout << "Top element of the stack: " << stack.peek() << endl;

    int popped_item = stack.pop();
    cout << "Popped item: " << popped_item << endl;
    cout << "Stack after popping: ";
    for (int item : stack.items) {
        cout << item << " ";
    }
    cout << endl;
    cout << "Stack size: " << stack.size() << endl;

    popped_item = stack.pop();
    cout << "Popped item: " << popped_item << endl;
    cout << "Stack after popping again: ";
    for (int item : stack.items) {
        cout << item << " ";
    }
    cout << endl;
    cout << "Stack size: " << stack.size() << endl;

    cout << "Is the stack empty now? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
