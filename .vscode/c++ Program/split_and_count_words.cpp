#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, inputString);

    // Variables to store the start and end positions of each word
    int wordStart = 0;
    int wordEnd = 0;
    int wordCount=0;

    // While loop to iterate through the string
    while (wordEnd <= inputString.length()) {
        // If the current character is a space or the end of the string, extract the word
        if (inputString[wordEnd] == ' ' || wordEnd == inputString.length()) {
            // Extract the word and print it
            std::string word = inputString.substr(wordStart, wordEnd - wordStart);
            std::cout << word << std::endl;

            wordCount++;

            // Move the wordStart to the next character position after the space
            wordStart = wordEnd + 1;
        }

        // Move to the next character
        wordEnd++;
    }

    std::cout << "Total words: " << wordCount;

    return 0;
}