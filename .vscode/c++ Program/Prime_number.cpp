#include<iostream>
using namespace std;

void PrimeNumber(int n){
    int m,flag=0;

    m=n/2;

    for(int i=2;i<=m;i++){
        if(n%i==0){
            cout << n << " is not a prime number.";
            flag=1;
            break;
        }
    }

    if(flag == 0){
        cout << n << " is a prime number.";
    }
}

int main(){

    int n;

    cout << "Check Prime number\n";

    cout << "Enter number: ";
    cin >> n;

    PrimeNumber(n);

    return 0;
}