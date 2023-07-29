#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    string vowels = "aeiouAEIOU";

    cout << "Enter String: ";
    cin >> str;

    int counter=0;

    for(int i=0;i<str.length();i++){
        for(int j=0;j<vowels.length();j++){
            if(str[i] == vowels[j]){
                counter++;
            }
        }
    }

    cout << counter;

    return 0;
}