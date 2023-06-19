#include<iostream>
using namespace std;

int main(){
    int arr[5] =  {7,2,3,4,5};

    int min = 0;

    for(int i=0;i<5;i++){

        //for maximum change > to <.

        if(arr[min] > arr[i]){
            min = i;
        }
    }

    cout << arr[min] << endl;
    cout << min << endl;

    return 0;
}