#include<iostream>
using namespace std;

void FibonaciSeries(int number){
    int n1=0,n2=1,nextStream,i;

    for(int i=2;i<number;i++){
        nextStream = n1 + n2;
        n1=n2;
        n2=nextStream;


        cout << n1 << endl;
        cout << n2 << endl;
        cout << nextStream << endl;
    }
}

int main(){

    int number;

    cout << "Enter Number: ";
    cin >> number;

    FibonaciSeries(number);

    return 0;
}