#include<iostream>
using namespace std;
#define size 5
int qeue[size], front = -1, rear = -1;
void enqeue(int value);
int dqeue();
void display();
int main()
{
    enqeue(40);;
    enqeue(5);
    display();
    dqeue();
    display();
   

}
void enqeue(int value) {
    if (rear == -1) {
        rear++;
        qeue[rear] = value;
        if (rear == 0) {
            front = 0;
        }
        else if (rear != size - 1) {
            rear++;
            qeue[rear] = value;
        }
        else {
            cout << "full";
        }
    }
}
int dqeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return -1;
    }
    int val = qeue[front];
    front++;
    return val;

}
void display(){
    if (front == -1) {
        cout << "empty";
    }
    else {
        for (int i = front; i <=rear; i++)
            cout << "qeue =" << qeue[i]<<endl;
    }
}
