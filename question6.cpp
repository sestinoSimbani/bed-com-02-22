#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>    

using namespace std;

string Reverse(const string& str);

int main() {
    
    ifstream inputFile("textfile.txt");
    string fileData;

    
    if (inputFile.is_open()) {
        
        getline(inputFile, fileData);

        
        inputFile.close();

    
        cout << "Contents of the text file:\n" << fileData << endl;


        int vowelCount = 0;
        for (char c : fileData) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                vowelCount++;
            }
        }
        cout << "Number of vowels in the text file: " << vowelCount << endl;


        int wordCount = 0;
        bool inWord = false;
        for (char c : fileData) {
            if (isalpha(c)) {
                if (!inWord) {
                    wordCount++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
        cout << "Number of words in the text file: " << wordCount << endl;

    
        string reversedStatement = Reverse(fileData);
        cout << "Reversed statement: " << reversedStatement << endl;

        
        for (size_t i = 0; i < fileData.size(); ++i) {
            if (isalpha(fileData[i]) && (i == 0 || !isalpha(fileData[i - 1]))) {
                fileData[i + 1] = toupper(fileData[i + 1]);
            }
        }
        cout << "Statement with second letter of each word capitalized: " << fileData << endl;

    } else {
    
        cout << "Unable to open file." << endl;
    }

    return 0;
}


string Reverse(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}
