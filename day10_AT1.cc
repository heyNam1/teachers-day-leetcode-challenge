#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
