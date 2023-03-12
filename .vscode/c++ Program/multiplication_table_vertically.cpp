#include<iostream>
using namespace std;

void VerticalMultiplication(int start, int end){
    
    int n=1,sum=0;

    while(n!=11){

        for(int i=start;i<=end;i++){
            sum = i*n;
            cout << i << " X " << n << " = " << sum << endl;
        }
        cout << "----------------" << endl;
        n=n+1;
    }

}

int main(){

    int start,end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    VerticalMultiplication(start,end);

    return 0;
}

/*
When you enter 1 as starting number and 5 as ending number than it will give you this kind of output:-

Enter starting number: 1
Enter ending number: 5
1 X 1 = 1
2 X 1 = 2
3 X 1 = 3
4 X 1 = 4
5 X 1 = 5
----------------
1 X 2 = 2
2 X 2 = 4
3 X 2 = 6
4 X 2 = 8
5 X 2 = 10
----------------
1 X 3 = 3
2 X 3 = 6
3 X 3 = 9
4 X 3 = 12
5 X 3 = 15
----------------
1 X 4 = 4
2 X 4 = 8
3 X 4 = 12
4 X 4 = 16
5 X 4 = 20
----------------
1 X 5 = 5
2 X 5 = 10
3 X 5 = 15
4 X 5 = 20
5 X 5 = 25
----------------
1 X 6 = 6
2 X 6 = 12
3 X 6 = 18
4 X 6 = 24
5 X 6 = 30
----------------
1 X 7 = 7
2 X 7 = 14
3 X 7 = 21
4 X 7 = 28
5 X 7 = 35
----------------
1 X 8 = 8
2 X 8 = 16
3 X 8 = 24
4 X 8 = 32
5 X 8 = 40
----------------
1 X 9 = 9
2 X 9 = 18
3 X 9 = 27
4 X 9 = 36
5 X 9 = 45
----------------
1 X 10 = 10
2 X 10 = 20
3 X 10 = 30
4 X 10 = 40
5 X 10 = 50
----------------
*/