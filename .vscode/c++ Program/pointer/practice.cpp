#include<iostream>
using namespace std;

int main(){

    int n;

    int* ptr;

    ptr = &n;

    cout << "Enter value: ";
    cin >> n;

    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr;

    return 0;
}