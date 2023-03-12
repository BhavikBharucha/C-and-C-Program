#include<iostream>
using namespace std;

void MultiplicationTable(int digit){
    int sum = 0;

    int n=1;
    while(n!=11){
        sum = digit * n;
        cout << digit << " X " << n << " = " << sum << endl;
        n=n+1;
    }
}

int main(){

    int digit;

    cout << "Multiplication table" << endl;

    cout << "Enter number: ";
    cin >> digit;

    MultiplicationTable(digit);

    return 0;
}

/*

When you enter 15 then it will give you this kind of output:-

Multiplication table
Enter number: 015
15 X 1 = 15
15 X 2 = 30
15 X 3 = 45
15 X 4 = 60
15 X 5 = 75
15 X 6 = 90
15 X 7 = 105
15 X 8 = 120
15 X 9 = 135
*/