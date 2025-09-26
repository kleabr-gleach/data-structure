#include <iostream>
using namespace std;
struct node {
    int data;
    node* next;
};

node* top = NULL;

void display();

void push(int value);
int pop();
int peek();

int main() {
    push(5);
    push(9);
    push(10);
    push(100);
    pop();

    display();
    return 0;
}

void display() {
    node* cnode = new node;
    if (cnode == NULL) {
        cout << "empty";
    }
    else {
        cnode = top;
        while (cnode != NULL) {
            cout << cnode->data;
            cnode = cnode->next;
        }
    }
}

void push(int value) {
    node* nnode = new node;
    nnode->data = value;
    nnode->next = top;
    top = nnode;


}
int pop() {
    int value;
    node* f = new node;
    if (top == NULL) {
        cout << "empty";
        return -1;
    }
    else {
        f = top;
        top = f->next;
        value = f->data;
        delete(f);
        return value;
        
    }

}
int peek() {
   if (top == NULL) {
       cout << "empty";
       return -1;
    }
   else {
       return top->data;
   }
}
