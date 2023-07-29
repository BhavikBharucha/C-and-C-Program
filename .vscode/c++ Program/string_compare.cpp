#include<iostream>
#include<string>
using namespace std;

int main(){

    char str[100];
    string substr,temp;

    cout << "Enter String: ";
    cin.getline(str,100);

    cout << "Enter string you want to search: ";
    fflush(stdin);
    cin >> substr;

    char space = ' ';
    int i=0;

    while(str[i] != '\0'){
        if(str[i] != space){
            temp += str[i];
        }else{
            cout << temp << endl;
            if(substr == temp){
                
            }
            temp.clear();
        }
        i++;
    }

    cout << temp;

    return 0;
}