#include<iostream>
using namespace std;

int main(){
    int m,sum=0,n;

    cout << "Enter Number: ";
    cin >> n;

    int temp = n;

    while(n>0){
        m = n%10;
        sum = sum + m;
        n = n/10;
    }

    cout << "Sum of " << temp << " is: " << sum << endl;
    return 0;
}