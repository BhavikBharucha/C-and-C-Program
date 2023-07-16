#include<iostream>
using namespace std;

void change(int n);

int main(){
    int n = 5;

    change(n);

    cout << "Value of n: " << n;

    return 0;
}

void change(int n){
    n = 6;
}