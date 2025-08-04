#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string vowels = "aoyeui";
    for (char c : s)
    {
        if (vowels.find(c) == string::npos)
        {
            cout << '.' << c;
        }
    }

    return 0;
}
