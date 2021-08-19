#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std;

int playGame(const string word) {

    int wrongGuesses = 0;
    int n = word.length();

    string display = word;

    for(int i=0; i<n; i++)
        display[i] = '*';

    while (word != display) {
        cout << "Enter a letter in word " << display << " > ";
        char guess;
        cin >> guess;
        bool wrongGuess = true;

        for (int i=0; i<n; i++){
            if (guess == display[i]){
                wrongGuess = false;
                cout << guess << " is already in the word.\n";
                break;
            }
            if (guess == word[i]){
                wrongGuess = false;
                display[i] = guess;
            }
        }
        if (wrongGuess) {
            cout << guess << " is not in the word.\n";
            wrongGuesses++;
        }
    }
    cout << "The word is " << word << ".\n";
    cout << "You missed " << wrongGuesses << " times.\n";
    return wrongGuesses;
}

int main() {

    string *words, temp;

    ifstream finput("words.txt");
    //read # of words
    int numWords = 0;
    while (finput >> temp)
        numWords++;
    cout << numWords << " read.\n";

    //allocate array
    words = new string [numWords];

    //go back initial position in array
    finput.clear();
    finput.seekg(0);
    //read the words again to the array
    for(int i=0 ; i<numWords; i++)
        finput >> words[i];

    //select a random word
    srand(time(NULL));
    //play the game!
    while (true)
        playGame(words[(rand()*rand() + rand())%numWords]);
}











