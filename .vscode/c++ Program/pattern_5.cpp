#include <iostream>
using namespace std;

void PatternFunction(int n)
{
    int s=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for(int k=1;k<=s;k++)
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

    PatternFunction(n);

    return 0;
}

/*
Output:-

 *****
  ****
   ***
    **
     *
*/