#include<iostream>
using namespace std;

void SumOfArray(int arr[],int n){
    cout << "Enter Size of Array: ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Enter element at " << i << ": ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "Array Elements:" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "|";
    }

    int sumOfEvenNo = 0;
    cout << "\nEven Elements:" << endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            cout << arr[i] << "|";
            sumOfEvenNo = sumOfEvenNo + arr[i];
        }
    }

    cout << endl;

    int sumOfOddNo = 0;
    cout << "\nOdd Elements:" << endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 1){
            cout << arr[i] << "|";
            sumOfOddNo = sumOfOddNo + arr[i];
        }
    }

    cout << endl << "Sum of Even Numbers: " << sumOfEvenNo;
    cout << endl << "Sum of Odd Numbers: " << sumOfOddNo;
}

int main(){

    int n;
    int arr[n];

    SumOfArray(arr,n);

    return 0;
}