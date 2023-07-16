#include<iostream>
using namespace std;

void demofun(){
    int n1 = 20;

    int* ptr;

    ptr = &n1;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of n1: " << n1 << endl;
    cout << "Value of *ptr: " << *ptr << endl;
}

int main(){
    demofun();
    return 0;
}