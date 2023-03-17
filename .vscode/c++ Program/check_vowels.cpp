#include<iostream>
using namespace std;

void CheckVowels(char c){
    bool lowerCaseVowel, upperCaseVowel;

    lowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(!isalpha(c)){
        cout << "Please enter valid character";
    }else if(lowerCaseVowel || upperCaseVowel){
        cout << c << " is a vowel";
    }else{
        cout << c << " is not a vowel";
    }
}

int main(){
    char c;

    cout << "Enter character: ";
    cin >> c;

    CheckVowels(c);

    return 0;
}