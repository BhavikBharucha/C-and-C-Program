#include <iostream>
using namespace std;

void NumberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
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

0
01
012
0123
01234
012345
*/