#include<iostream>
#include<string>
using namespace std;

void CompareString(string str1,string str2){

    int flag = 0;

    if(str1.length() == str2.length()){
        for(int i=1;i<str1.length();i++){
            for(int j=1;j<str2.length();j++){
                if (str1[i] == str2[j]){
                    flag = 1;
                }else{
                    flag = 0;
                }
            }
        }
    }

    if(flag == 0){
        cout << "String is not equal";
    }else{
        cout << "String is equal";
    }
}

int main(){
    string str1,str2;

    cout << "Enter String1: ";
    getline(cin,str1);

    cout << "Enter String2: ";
    getline(cin,str2);

    CompareString(str1,str2);
    return 0;
}