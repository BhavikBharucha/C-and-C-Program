#include<iostream>
using namespace std;

void ArrayFunction(int n){
    int arr[n] = {1,2,3,4,5,6};

    for(int i=0;i<n;i++){
        cout << "Enter element at " << i << ": ";
        cin >> arr[i];
    }

    //check even and odd in array.

    int oddarr[n],evenarr[n];

    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            evenarr[i] = arr[i];
            cout << "even: " << evenarr[i] << endl;
        }else{
            oddarr[i] = arr[i];
            cout << "odd: " << oddarr[i] << endl;
        }
    }

    cout << "Even value's array: " << endl;
    for(int i=0;i<n;i++){
        cout << evenarr[i] << endl;
    }

    // cout << "\nOdd value's array: ";
    // for(int i=0;i<n;i++){
    //     cout << oddarr[i] << endl;
    // }
}

int main(){
    int n;

    cout << "Enter total no. of Element: ";
    cin >> n;
    ArrayFunction(n);

    return 0;
}