#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = n; i >0; i--)
    {
        for (int j = i; j >0; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pyramid(n);
    return 0;
}

/*
output:-
* * * * *
* * * *
* * *
* *
*
*/