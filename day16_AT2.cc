#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    set<int> levels;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }

    if ((int)levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
