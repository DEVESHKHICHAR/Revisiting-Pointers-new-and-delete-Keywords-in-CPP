#include <iostream>
using namespace std;

int main() {
    // int a=3;
    char* p= new char ('d');
    cout<<"the vlaue of address is: "<<*p<<endl;
    int* arr= new int[3];
    *(arr+1)=4;
    cout<<"the value at a[0]: "<<arr[1]<<endl; 
    delete p;
    cout<<"the value of address is: "<<*p<<endl; 
    return 0;
}