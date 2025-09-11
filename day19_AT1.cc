#include <iostream>
#include <vector>
using namespace std;
// 97 = a , 98= b, 122 = z
int main()
{
    string a;
    cin >> a;
    int ans = 0;
    int currentChar = 'a';

    for (int i = 0; i < a.length(); i++)
    {
        int nextChar = a[i];

        int clockWise = abs(nextChar - currentChar);
        int antiClockwise = 26-clockWise;

        int hey = min(clockWise, antiClockwise);

        ans += hey;
        currentChar = nextChar;
    }

    cout << ans;
    return 0;
}