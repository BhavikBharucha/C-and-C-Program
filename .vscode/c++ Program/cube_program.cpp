#include <iostream>
using namespace std;

void CubFunction(int n){
    int cub=0;

    //sum = n*2*2;

    while(n!=0){
        cub = n*n*n;
        cout << "Number is: " << n << " and Cub of the " << n << " is: " << cub << endl;
        n=n-1;
    }
}

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    CubFunction(n);
    return 0;
}

/*
when you enter 5 then it will give you this kind of output:-

Enter number: 5
Number is: 5 and Cub of the 5 is: 125
Number is: 4 and Cub of the 4 is: 64
Number is: 3 and Cub of the 3 is: 27
Number is: 2 and Cub of the 2 is: 8
Number is: 1 and Cub of the 1 is: 1
*/