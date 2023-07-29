#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int size;

    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout << "Enter element at " << i << ": ";
        cin >> arr[i];
    }

    int kelement = round(size/2);
    int flag=0;

    for(int i=0;i<size;i++){
        if(i == kelement){
            cout << arr[i-1];
        }
    }

    return 0;
}