#include<iostream>
using namespace std;

int main(){

    int rows,cols;

    cout << "Enter Rows: ";
    cin >> rows;

    cout << "Enter Columns: ";
    cin >> cols;

    int arr1[rows][cols] = {};
    int arr2[rows][cols] = {};
    int mul[rows][cols] = {};

    cout << "\nEnter Value for matrix1: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Enter element of matrix1 at [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }

    cout << "\nEnter Value for matrix2: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Enter element of matrix2 at [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }

    cout << "\nMultiplication of matrix: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            for(int k=0;k<cols;k++){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "\nEnter Value for matrix2: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << mul[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}