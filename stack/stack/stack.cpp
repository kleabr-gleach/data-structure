#include<iostream>
using namespace std;
#define size 5
int stack[size], top = -1;
void push(int value);
int pop();
int peek();
void display();
int main()
{
    push(55);
    push(49);
    push(39);
    display();
    pop();
    display();
    cout << "peak" << peek();
}
void push(int value) {
    if (top == size - 1) {
        cout << "empty";
}
    else {
        top++;
        stack[top] = value;
        return;
    }
}
int pop() {
    if (top == - 1) {
        cout << "empty";
    }
    else {
        top--;
        return stack[top];
    }
}
int peek() {
    if (top == -1) {
        cout << "empty";
    }
    else {
       
        return stack[top];
    }
}
void display() {
    if (top == -1) {
        cout << "empty";
    }
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
      }
    }
}
