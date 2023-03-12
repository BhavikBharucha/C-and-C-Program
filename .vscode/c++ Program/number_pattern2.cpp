#include <iostream>
using namespace std;

void NumberPattern(int n)
{
    int number = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
        }

        cout << endl;
    }
}

int main()
{

    int n = 5;

    NumberPattern(n);

    return 0;
}

/*
Output:-

1 
1 1
1 1 1
1 1 1 1
1 1 1 1 1
*/