#include<iostream>
using namespace std;

void ArmstrongNumber(int number){
    int sum=0,r,temp;

    temp = number;

    while(number > 0){
        r = number%10;
        sum = sum + (r*r*r);
        number=number/10;
    }

    if(temp == sum){
        cout << temp << " is a prime number";
    }else{
        cout << temp << " is not a prime number";
    }
}

int main(){

    int number;

    cout << "Enter number: ";
    cin >> number;

    ArmstrongNumber(number);

    return 0;
}