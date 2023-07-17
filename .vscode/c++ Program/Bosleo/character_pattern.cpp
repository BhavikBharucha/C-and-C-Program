#include<iostream>
using namespace std;

void CharPattern(char startchar,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << startchar << " ";
            startchar++;
        }
        cout << endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){

            int chartoint = int(startchar);

            cout << chartoint << " ";
            startchar++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    char startchar;

    cout << "Enter Length: ";
    cin >> n;

    fflush(stdin);
    cout << "Enter Character: ";
    cin >> startchar;

    CharPattern(startchar,n);
    return 0;
}

/*
Enter Length: 5
Enter Character: A
A 
B C
D E F
G H I J
K L M N O
*/