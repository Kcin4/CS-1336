#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double mangos=0, checkpoints=0;

    cout << "Enter number of mangos: ";
    cin >> mangos;
    cout << "# of checkposts: ";
    cin >> checkpoints;
    for(int i=0; i<checkpoints; ++i){
        mangos = ceil(mangos / 2);
    }
    cout << "Finally, you will have " << mangos << " mangos";
}
