#include<iostream>
using namespace std;

int main(){

    int num[5];
    int* p;

    p = num;

    *p = 40;    //It will assign 40 at 0 index of array of num

    p++;    //It will increase index y 1

    *p = 50;    //It will assign 50 at 1 index of array of num

    cout << num[0];
    cout << num[1];

    // for(int i=0;i<5;i++){
    //     cout << num[i];
    // }

    return 0;
}