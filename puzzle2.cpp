#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>

using namespace std;

//allocate arrays statically for max possible size
char input[20][20];
char output[20][20];
string words[100];
int arraySize, numWords;
int wordsFound=0;

//starting from position (r,c), go down & search for word.
//if there is perfect match, copy the word to output array
//and return true
//otherwise, return false.
// word[0] vs. input[r+0][c]
// word[1] vs. input[r+1][c]
// ...
bool search(int r, int c, string word, int rdelta, int cdelta)
{
    int n = word.length();

    if(rdelta == -1)
        if(r+1<n)
            return false;
    if(rdelta == 1)
        if(arraySize-r<n)
            return false;
    if(cdelta == -1)
        if(c+1 < n)
            return false;
    if(cdelta == 1)
        if(arraySize-c<n)
            return false;

    for(int i=0; i<n; i++)
        if(input[r+rdelta*i][c+cdelta*i]!=word[i])
            return false;

    for(int i=0; i<n; i++)
        output[r+rdelta*i][c+cdelta*i]=word[i];
    wordsFound++;
    return true;
}


int main()
{
    ifstream finput("puzzle.txt");

    //initialize both
    memset(input, ' ', 20*20);
    memset(output, ' ', 20*20);

    //read array size, then the array
    finput >> arraySize;
    for(int r=0; r<arraySize; r++)
        for(int c=0; c<arraySize; c++)
            finput >> input[r][c];

    //read the # of words, then the actual words
    finput >> numWords;
    for(int i=0 ; i<numWords; i++)
        finput >> words[i];

    for(int r=0; r<arraySize; r++)
        for(int c=0; c<arraySize; c++)
            for(int i=0 ; i<numWords; i++)
            {
                search(r, c, words[i], 1, 0); //search down!
                search(r, c, words[i], -1, 0); //search up!

                search(r, c, words[i], 0, -1); //search left!
                search(r, c, words[i], 0, 1); //search right!

                search(r, c, words[i], 1, 1); //search down & right diagonal
                search(r, c, words[i], -1, 1); //search up & right diagonal
                search(r, c, words[i], 1, -1); //search down & left diagonal
                search(r, c, words[i], -1, -1); //search up & left diagonal
            }

    cout << "Found " << wordsFound << " words.\n";
    cout << "Matrix output with words:\n";
    for(int r=0; r<arraySize; r++)
    {
        for(int c=0; c<arraySize; c++)
            cout << output[r][c] << " ";
        cout << endl;
    }
}
