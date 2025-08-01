#include <iostream>
using namespace std;

int main()
{
    int n;          
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        if (s.length() > 10)
        {
            char left = s[0];
            char right = s[s.length() - 1];

            int count = s.length() - 2;  
            cout << left << count << right << endl;
        }
        else
        {
            cout << s << endl;  
        }
    }

    return 0;
}
