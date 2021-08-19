#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int score1=0, score2=0, score3=0, playerNumber=0, points=0;
    while (cin >> playerNumber) {
        if (playerNumber == 0)
            break;
        cin >> points;
        if (playerNumber == 1)
            score1 += points;
        if (playerNumber == 2)
            score2 += points;
        if (playerNumber == 3)
            score3 += points;
    }
    cout << "Player 1: " << score1 << endl;
    cout << "Player 2: " << score2 << endl;
    cout << "Player 3: " << score3 << endl;
    if (score1>=score2 && score1>=score3)
        cout << "Player 1 is the winner!" << endl;
    if (score2>score1 && score2>=score3)
        cout << "Player 2 is the winner!" << endl;
    if (score3>score2 && score3>score1)
        cout << "Player 3 is the winner!" << endl;
}
