#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int king, queen, rook, bishop, knight, pawn;

    cin >> king;
    cin >> queen;
    cin >> rook;
    cin >> bishop;
    cin >> knight;
    cin >> pawn;
    king = 1 - king;
    queen = 1 - queen;
    rook = 2 - rook;
    bishop = 2 - bishop;
    knight = 2 - knight;
    pawn = 8 - pawn;
    cout << king;
    cout << " " << queen;
    cout << " " << rook;
    cout << " " << bishop;
    cout << " " << knight;
    cout << " " << pawn;

}
