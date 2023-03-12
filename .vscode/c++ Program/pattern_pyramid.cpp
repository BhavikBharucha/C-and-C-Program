#include <iostream>
using namespace std;

void PyramidPattern(int n)
{

    int s = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }

        s--;

        cout << endl;
    }
}

int main()
{

    int n = 5;

    PyramidPattern(n);

    return 0;
}