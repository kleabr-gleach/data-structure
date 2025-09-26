#include<iostream>
using namespace std;
#define size 5
int qeue[size], rear = -1, front = -1;
void en(int value);
int de();
void display();
int main()
{
    en(10);
    en(90);
    display();
    de();
    de();
    display();
    en(80);
    en(90);
    en(80);
    en(100);
    en(200);
    display();
    de();
    de();
    display();
}
void en(int value) {
    if (rear == -1) {
        rear++;
        qeue[rear] = value;
        if (rear == 0) {
            front = 0;
        }
    }
    else if ((front == 0 && rear == size - 1) || (rear + 1 == front)) {
        cout << "full";
    }
    else if (rear == size - 1 && front != 0) {
        rear = 0;
            qeue[rear] = value;
        
    }
    else {
        rear++;
        qeue[rear]=value;
    }
}
int de() {
   
    if (front == -1 ) {
        cout << "Queue is empty\n";
        return -1;
    }
    int val = qeue[front];
    if (front == rear) {
        front = rear = -1;
  }
    else if (front == size - 1 ) {
        front = 0;
        
    }
    else{  
    front++;
    }
    return val;
}
void display() {
    if (front == -1) {
        cout << "empty";
    }
    else if (front<rear){
        for (int i = front; i <= rear; i++)
            cout << "qeue =" << qeue[i] << endl;
    }
    else if (front > rear) {
        for (int i = rear; i <= front; i++) {
            cout << "qeue =" << qeue[i] << endl;
        }
    }
}
