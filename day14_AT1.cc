#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string result;
    for (int i = 0; i < n.length();)
    {
        if (n[i] == 'W' && n[i + 1] == 'U' && n[i + 2] == 'B')
        {
            if (!result.empty() && result.back() != ' ')
            {
                result += ' ';
            }
            i = i + 3;
        }
        else
        {
            result += n[i];
            i++;
        }
    }

    cout << result;
    return 0;
}