#include <iostream>
using namespace std;

/*
  print the patter
  * * * * *
  * * * * *
  * * * * *
*/

int main()
{
    // Time complexity  = O(row x col)
    // Space complexity = 1  ( constant )
    int row = 3;
    int col = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}