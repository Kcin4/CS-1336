#include <iostream>
#include <cmath>

using namespace std;

int ntcases;
char matrix[3][3];

//you can invoke isWinner('X') or isWinner('O') - returns true or false
bool isWinner(char player)
{
    for(int i=0; i<3; i++)
    {
        //checks the row
        if (matrix[i][0] == player && matrix[i][1] == player && matrix[i][2] == player)
            return true;
        //checks the column
        if (matrix[0][i] == player && matrix[1][i] == player && matrix[2][i] == player)
            return true;
    }

    //checks diagonals
    if (matrix[0][0] == player && matrix[1][1] == player && matrix[2][2] == player)
        return true;
    if (matrix[0][2] == player && matrix[1][1] == player && matrix[2][0] == player)
        return true;

    return false;
}

//check whether matrix[][] has the valid configuration!
bool isValid()
{
    int xcount=0, ocount=0;
    for(int r=0; r<3; r++)
            for(int c=0; c<3; c++){
                if (matrix[r][c] == 'X')
                    xcount++;
                else if (matrix[r][c] == 'O')
                    ocount++;
            }
    bool xwon = isWinner('X'), owon = isWinner('O');
    if (xwon && owon)
        return false;

    if(xcount == ocount)
        return (xwon ? false : true);
    else if(xcount == ocount+1)
        return (owon ? false : true);
    else
        return false;
}

int main()
{
    cin >> ntcases;
    for(int i=0; i<ntcases; i++)
    {
        for(int r=0; r<3; r++)
            for(int c=0; c<3; c++)
                cin >> matrix[r][c];

        cout << (isValid() ? "yes" : "no") << endl;
    }
}
