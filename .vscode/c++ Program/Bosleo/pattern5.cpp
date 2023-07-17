#include<iostream>
using namespace std;

void StarPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j == 1 || i == j || i == n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j == 1 || i == j || i == n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter Number: ";
    cin >> n;

    StarPattern(n);
}