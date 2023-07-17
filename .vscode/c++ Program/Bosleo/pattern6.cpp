#include<iostream>
using namespace std;

void StarPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        for(int k=1;k<=i;k++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << " ";
        }

        for(int k=1;k<n-i+1;k++){
            cout << "* ";
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