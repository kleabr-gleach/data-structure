#include<iostream>
using namespace std;
//struct syntax like class syntax 
struct node {
    int x = 5;//value
    node* y;//pointer
};
int main() {
    node* y = new node;//get pointer from struct to get the vlues from it 
    y->x;// now we get pointer see value
    cout << y<<endl;//place
    int data = y->x;
    cout << data<<endl;//data
    delete y;//to dont make over write
}
