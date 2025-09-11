
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> line;

    while (a--)
    {
        int b;
        cin >> b;
        line.push_back(b);
    }
    int n = line.size();

    int maxHeight = line[0];
    int minHeight = line[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (line[i] > maxHeight)
        {
            maxHeight = line[i];
            maxIndex = i;
        }

        if (line[i] <= minHeight)
        {
            minHeight = line[i];
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
    {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
    /*
    4
    33 44 11 22

    */
}