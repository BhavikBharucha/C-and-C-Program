#include<iostream>
using namespace std;

int main()
{
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    const int MAX_WORDS = 5; // Maximum number of words in the sentence
    string words[MAX_WORDS]; // String array to store the words
    int wordCount = 0; // To keep track of the number of words

    int i=0;
    string temp;

    //Split string
    while(input[i] != '\0')
    {
        string word;
        while(input[i] != ':' && input[i] != '\0')
        {
            word += input[i];
            i++;
        }

        words[wordCount++] = word;

        if(input[i] != '\0')
        {
            i++;
        }
    }

    //Extract individual character from last index of string
    string temp1;
    for(int i=0;i<wordCount;i++)
    {
        if(i == 2)
        {
            //cout << words[i] << endl;
            temp1 += words[i];
        }
    }

    int j=0;
    
    for(int j=0;j<temp1.length();j++)
    {
        cout << temp1[j] << endl;
    }

    return 0;
}