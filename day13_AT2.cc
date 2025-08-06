#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 1;
    for (int i = 1; i < n.length(); i++)
    {
        if (n[i] == n[i - 1])
        {
            count++;
            if (count >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << "NO";
}
