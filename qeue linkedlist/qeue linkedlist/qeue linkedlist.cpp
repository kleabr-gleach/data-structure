#include<iostream>
#define null NULL
using namespace std;
struct node {
    int data;
    node* next;
};
node* front = null;
node* rear= null;
void en(int value);
void de();
int peek();
void display();
int main() {
    en(90);
    en(10);
    display();
    return 0;
}
void en(int value) {
    node* nnode = new node;
    nnode->data = value;
    nnode->next=null;
    if (front == null && front == rear) {
        front = rear = nnode;
        
    }
    else {
        rear->next = nnode;
        rear = nnode;
    }
}
void de() {
    if (rear == null) {
        cout << "empty";
    }
    else if (front == rear) {
        node*ptr = front;
        front = rear = null;
        delete(ptr);

    }
    else {
        node*ptr = front;
        front = front->next;
        delete(ptr);
    }
    
}
int peak() {
    if (front == null) {
        cout << "qeue is empty";
    }
    else {
        return front->data;
    }
}
void display(){
    node* cnode = front;
    if (cnode == null) {
        cout << "empty";
    }
    else{
            while (cnode != null) {
                cout << cnode->data << endl;
                cnode = cnode->next;
            }
            cout << endl;
        }
    }
