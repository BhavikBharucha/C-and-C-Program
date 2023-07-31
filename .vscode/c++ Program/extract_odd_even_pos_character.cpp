#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    cout << "Enter String: ";
    cin >> name;

    int len = name.length();

    string oddpos,evenpos;

    for(int i=0;i<len;i++){
        if(i % 2 == 1){
            cout << name[i] << endl;
            oddpos += name[i];
        }else{
            evenpos += name[i];
        }
    }

    cout << "Odd Postion Character: " << oddpos << endl;
    cout << "Even Postion Character: " << evenpos << endl;

    return 0;
}