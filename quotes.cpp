#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAXQUOTES = 1000000;
string quotes[MAXQUOTES];
int actualQuotes = 0;

int main() {

    int numQuotes = 0, displayCount=0;

    cout << "How many quotes to read? ";
    cin >> numQuotes;

    ifstream finput("quotes.txt");
    while (getline(finput, quotes[actualQuotes]) && actualQuotes < numQuotes)
        actualQuotes++;

    cout << "How many quotes to display? ";
    cin >> displayCount;
    if (displayCount > actualQuotes)
        displayCount = actualQuotes;

    srand(time(NULL));
    for(int i=0; i<displayCount; i++){
        int index = rand() % actualQuotes;
        if (quotes[index] != "") {
            cout << index << ": " << quotes[index] << endl;
            quotes[index] = "";
        } else
            i--;
    }
}
