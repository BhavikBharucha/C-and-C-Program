#include<iostream>
using namespace std;

int main(){

    int n1=5,n2=2;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "After Swap" << endl;

    cout << "N1: " << n1 << "\nN2: " << n2 << endl;

    return 0;
}