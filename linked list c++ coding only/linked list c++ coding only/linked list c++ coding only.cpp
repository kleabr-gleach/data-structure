

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
node* head = NULL;
void instructnode(int value);
void display();
void deleten(int value);
void begin(int value);
void deleteb();
void deleteen();

int main()
{
    instructnode(10);
    instructnode(20);
    instructnode(30);
    instructnode(40);
    display();
    return 0;
  
}
void instructnode(int value) {
    node* nnode = new node;
    node* l = new node;
    nnode->data = value;
    nnode->next = NULL;
    if (head == NULL) {
        head == nnode;
    }else{
        l = head;
        while (l->next != NULL) {
        l = l->next;
    }
        l->next = nnode;
    } 
}
void display() {
    node* cnode = new node;
    if (cnode == NULL) {
        cout << "empty";
    }
    else {
        cnode = head;
        while (cnode != NULL) {
           cout<< cnode->data;
            cnode = cnode->next;
        }
    }
}
void deleten(int value) {
    node* f = new node;
    node* s = new node;
    f = head;
    s = head;
    if (f->data = value) {
        head = s->next;
        delete(f);
        return;
    }
    while (f->data != value) {
        s = f;
        f = f->next;

    }
    s->next = f->next;
    delete(f);
    
}
void begin(int value) {
    node* nnode = new node;
    nnode->data = value;
    nnode->next = head;
    head=nnode;
}
void deleteb() {
    node* f = new node;
    f = head;
    if (head == NULL) {
        cout << "empty";
    }
    else {
        head=f->next;
        delete(f);
        return;
    }
}
void deleteen() {
    node* f = new node;
    node* s = new node;
    if (head == NULL) {
        cout << "empty";
    }
    else if (head->next = NULL) {
        delete(head);
        head = NULL;
    }
    else {
        f = head;
        s = NULL;
        while (f->next->next != NULL) {
            f = f->next;
        }
        delete(f->next);
        f->next = NULL;
        return;
    }
}
