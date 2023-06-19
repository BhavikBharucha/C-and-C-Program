//Seperate string based on space.

#include<iostream>
using namespace std;

int main(){
    char arr[100];

    cout << "Enter String: ";
    cin.getline(arr,100);

    char separator = ' ';
    int i=0;

    string temp;

    while(arr[i] != '\0'){
        if(arr[i] != separator){
            temp += arr[i];
        }else{
            cout << temp << endl;
            temp.clear();
        }
        i++;
    }

    //To print last stored word.
    cout << temp << endl;

    return 0;
}