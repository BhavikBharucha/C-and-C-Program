#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    char c;

    cout << "Enter string: ";
    cin >> str;

    int len = str.length();

    for(int i=0;i<len/2;i++){
        c = str[i];
        str[i] = str[len-i-2];
        str[len-i-2] = c;
    }

    cout << str;

    return 0;
}