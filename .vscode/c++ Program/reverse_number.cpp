#include<iostream>
using namespace std;

int main(){
    int n,reverse_num=0,remaindar=0;

    cout << "Enter Number: ";
    cin >> n;

    while(n != 0){
        remaindar = n % 10;
        reverse_num = reverse_num * 10 + remaindar;

        if(reverse_num%2 == 0){
            cout << reverse_num << " is even number." << endl;
        }else{
            cout << reverse_num << " is odd number." << endl;
        }

        n /= 10;
    }

    cout << "\nReversed Number: " << reverse_num;

    return 0;
}