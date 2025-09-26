#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int* ptr = &x;
    cout << &x << endl;//the place of data in memory
    cout << ptr<<endl;//the place of the variable in data->&x=ptr
    cout << *ptr<<endl;//the variable->x=*ptr
    //another solution for pointer
    int* ptr1 = new int(20);//to make pointer without make a varrible before it
    cout << *ptr1<<endl;

    
    return 0;
}
