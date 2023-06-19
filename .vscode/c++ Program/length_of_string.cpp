#include<iostream>
using namespace std;

int main(){
    char name[100] = "bhavik";

    int length = 0;

    for(int i=0;name[length] != '\0';++i){
        length++;
    }

    cout << length;

    return 0;
}