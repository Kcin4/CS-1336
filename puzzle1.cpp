#include <iostream>
#include <string>
#include <cstring> //memset()
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>

using namespace std;

//allocate 2D arrays statically for max possible size
char input[20][20];
char output[20][20];
string words[100];
int arraySize=0, numWords=0; //actual usage!
int wordsFound=0;

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchDown(int r, int c, string word) {
    int n = word.length();
    //safety check
    //arraySize - r is remaining # of rows!
    if (arraySize - r < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r+i][c] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r+i][c] = word[i];
    wordsFound++;
    return true;
}

bool searchRight(int r, int c, string word) {
    int n = word.length();
    //safety check
    //arraySize - c is remaining # of rows!
    if (arraySize - c < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r][c+i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r][c+i] = word[i];
    wordsFound++;
    return true;
}


//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchDownRight(int r, int c, string word) {

    int n = word.length();
    //safety check
    //arraySize - r is remaining # of rows!
    if (arraySize - r < n)
        return false;
    if (arraySize - c < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r+i][c+i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r+i][c+i] = word[i];
    wordsFound++;
    return true;
}

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchDownLeft(int r, int c, string word) {

    int n = word.length();
    //safety check
    //arraySize - r is remaining # of rows!
    if (arraySize - r < n)
        return false;
    if (c+1 < n)
        return false;
    for(int i=0 ; i<n ; i++)
        if (input[r+i][c-i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r+i][c-i] = word[i];
    wordsFound++;
    return true;
}

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchUpRight(int r, int c, string word) {
    int n = word.length();
    //safety check
    //r is remaining # of rows!
    if (r+1 < n)
        return false;
    if (arraySize - c < n)
        return false;
    /*
    if (min(r+1, arraySize - c) < n)
        return false;

    if (r+1 < n || arraySize - c < n)
        return false;
    */

    for(int i=0 ; i<n ; i++)
        if (input[r-i][c+i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r-i][c+i] = word[i];
    wordsFound++;
    return true;
}

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchUpLeft(int r, int c, string word) {
    int n = word.length();
    //safety check
    //r is remaining # of rows!
    if (r+1 < n)
        return false;
    if (c+1 < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r-i][c-i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r-i][c-i] = word[i];
    wordsFound++;
    return true;
}

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchUp(int r, int c, string word) {
    int n = word.length();
    //safety check
    //r is remaining # of rows!
    if (r+1 < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r-i][c] != word[i])
            return false;

    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r-i][c] = word[i];
    wordsFound++;
    return true;
}

//starting from position (r, c), search for the word!
//update output array & return true if found,
//return false otherwise.
bool searchLeft(int r, int c, string word) {
    int n = word.length();
    //safety check
    //c is remaining # of rows!
    if (c+1 < n)
        return false;

    for(int i=0 ; i<n ; i++)
        if (input[r][c-i] != word[i])
            return false;
    //word is found!
    for(int i=0 ; i<n ; i++)
        output[r][c-i] = word[i];
    wordsFound++;
    return true;
}


int main() {
    ifstream finput("puzzle.txt");

    //initialize both matrices
    memset(input, ' ', 20*20);
    memset(output, ' ', 20*20);

    /* equivalent:
    for(int i=0; i<20; i++)
        for(int j=0; j<20; j++) {
            input[i][j] = ' ';
            output[i][j] = ' ';
        }
    */

    //memset(intArray, 0, 20*20*sizeof(int));

    //read array size, then the array
    finput >> arraySize;
    for(int r=0; r<arraySize; r++)
        for(int c=0; c<arraySize; c++)
            finput >> input[r][c];

    //read the # of words, then the actual words
    finput >> numWords;
    for(int i=0 ; i<numWords; i++)
        finput >> words[i];

    //output only the letters that form the specified words
    //up, down, left, right & diagonal directions are allowed.
    for(int r=0; r<arraySize; r++)
        for(int c=0; c<arraySize; c++)
            for(int i=0; i<numWords; i++) {
                searchDown(r, c, words[i]);
                searchUp(r, c, words[i]);
                searchLeft(r, c, words[i]);
                searchRight(r, c, words[i]);
                searchDownRight(r, c, words[i]);
                searchDownLeft(r, c, words[i]);
                searchUpRight(r, c, words[i]);
                searchUpLeft(r, c, words[i]);
            }


    cout << "Found " << wordsFound << " words.\n";
    for(int r=0; r<arraySize; r++) {
        for(int c=0; c<arraySize; c++)
            cout << output[r][c] << " ";
        cout << endl;
    }
}
