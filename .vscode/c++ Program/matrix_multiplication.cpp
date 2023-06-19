#include<iostream>
using namespace std;

int main(){

    int rows,cols;

    cout << "Enter Number of rows: ";
    cin >> rows;

    cout << "Enter Number of columns: ";
    cin >> cols;

    int arr1[rows][cols] = {};
    int arr2[rows][cols] = {};
    int multiplication[rows][cols] = {};

    //Take input for matrix 1.

    cout << endl << "Enter value for matrix 1: " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Enter value at [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }

    cout << endl << "Enter value for matrix 2: " << endl;;

    //Take input for matrix 2.
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Enter value at [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }

    //Display matrix 1.
    cout << endl << "2D matrix 1: " << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }

    //Display matrix 2.
    cout << endl << "2D matrix 2: " << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    //Perform Multiplication of both 2D matrix

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            multiplication[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    cout << endl << "Multiplication of both matrix: " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << multiplication[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}