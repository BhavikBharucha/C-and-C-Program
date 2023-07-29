#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    const int MAX_WORDS = 100; // Maximum number of words in the sentence
    std::string words[MAX_WORDS]; // String array to store the words
    int wordCount = 0; // To keep track of the number of words

    int i = 0;
    while (input[i] != '\0') { // Loop until the end of the string
        std::string word;
        while (input[i] != ' ' && input[i] != '\0') {
            word += input[i];
            i++;
        }
        words[wordCount++] = word;

        if (input[i] != '\0')
            i++; // Move to the next character after the space
    }

    // Print the words in the array
    std::cout << "Words in the sentence: \n";
    for (int j = 0; j < wordCount; j++) {
        std::cout << words[j] << std::endl;
    }

    std::cout << "Total Words: " << wordCount << std::endl;

    int matchWords = 0;

    for(int k=0;k<wordCount;k++){
        for(int s=0;s<k;s++){
            if(words[k] == words[s]){
                std::cout << "Repeated word: " << words[s] << std::endl;
                matchWords++;
            }
        }

    }

    std::cout << "\nTotal matched words: " << matchWords;

    return 0;
}
