#include<iostream>
using namespace std;

int main(){

    int rows,cols;

    cout << "Enter Number of rows: ";
    cin >> rows;

    cout << "Enter Number of columns: ";
    cin >> cols;

    int arr[rows][cols] = {};

    //Take input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Enter value at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    //Display 2D array
    cout << endl << "2D matrix: " << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}