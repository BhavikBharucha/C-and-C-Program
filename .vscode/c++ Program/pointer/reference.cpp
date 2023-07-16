#include<iostream>
using namespace std;

//pass by value
int square1(int n){
    cout << "Pass by value - Address of n: " << &n;

    n *= n;
    return n;
}

//pass by reference with pointer argument
void square2(int* n){
    cout << "Pass by reference with pointer argument - Address of n: " << n;

    *n *= *n;
}

//pass by reference with reference argument
void square3(int& n){
    cout << "Pass by reference with reference argument - Address of n: " << &n;

    n *= n;
}

void Func(){
    // Call-by-Value
    int n1 = 8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";
  
    // Call-by-Reference with Pointer Arguments
    int n2 = 8;
    cout << "address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";
  
    // Call-by-Reference with Reference Arguments
    int n3 = 8;
    cout << "address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";
}

int main(){
    Func();
    return 0;
}