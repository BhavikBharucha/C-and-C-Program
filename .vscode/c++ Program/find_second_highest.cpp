#include<iostream>
using namespace std;

int findsecondHighest(int num){
    int highest = -1;
    int secondHighest = -1;

    while(num > 0){
        int digit = num % 10;
        cout << digit << endl;
        if(digit > highest){
            secondHighest = highest;
            highest = digit;
        }else if(digit > secondHighest){
            secondHighest = digit;
        }
        num /= 10;
    }

    return secondHighest;
}

int main(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    int secondHighest = findsecondHighest(num);

    if(secondHighest == -1){
        cout << "There is no second highest element!!";
    }else{
        //int lastDigit = num % 10;
        cout << "Second highest element: " << secondHighest;
    }

    return 0;
}