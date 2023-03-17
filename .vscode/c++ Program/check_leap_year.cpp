#include<iostream>
using namespace std;

void CheckLeapYear(int year){

    if(year % 400 == 0 || !year % 100 == 0 || year % 4 == 0){
        cout << year << " is leap year";
    }else{
        cout << year << " is not a leap year";
    }
}

int main(){
    int year;

    cout << "Enter year to check whether it is leap year or not: ";
    cin >> year;

    CheckLeapYear(year);

    return 0;
}