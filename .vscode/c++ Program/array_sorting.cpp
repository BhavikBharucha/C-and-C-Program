#include<iostream>
using namespace std;

int main(){

    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout << "Enter element at " << i << ": ";
        cin >> arr[i];
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << ",";
    }

    return 0;
}