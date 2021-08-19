#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

int numPlayers=0, money[10], bet=0;
string player[10], player1, player2;

int findIndex(string name){
    int index=0;
    for (int i=0; i<numPlayers; i++){
        if (player[i]==name)
            index = i;
    }
    return index;
}

int main() {

    cin >> numPlayers;

    for (int i=0; i<numPlayers; i++){
        cin >> player[i] >> money[i];
    }
    while (cin >> player1){
        if (player1=="end")
            break;
        cin >> player2 >> bet;
        money[findIndex(player1)]-=bet;
        money[findIndex(player2)]+=bet;
    }
    for (int i=0; i<numPlayers; i++){
        cout << player[i] << " " << money[i] << endl;
    }
}
