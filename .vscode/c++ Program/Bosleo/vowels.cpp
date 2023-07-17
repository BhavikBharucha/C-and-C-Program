#include <iostream>
#include <string>
using namespace std;

void CountVowels(string str1)
{
    int counter = 0;
    string vowels = "aeiouAEIOU";

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < vowels.length(); j++)
        {
            if (str1[i] == vowels[j])
            {
                counter++;
            }
        }
    }

    cout << "String contain: " << counter << " Vowels";
}

int main()
{
    string str1;

    cout << "Enter String: ";
    getline(cin, str1);

    CountVowels(str1);

    return 0;
}