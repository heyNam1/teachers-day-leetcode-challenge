#include <iostream>
using namespace std;

int main()
{
    int rows;
    int cols;

    int x;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> x;
            if (x == 1)
            {
                rows = i;
                cols = j;
            }
        }
    }

    int moves = abs(rows - 3) + abs(cols - 3);
    cout << moves;
}