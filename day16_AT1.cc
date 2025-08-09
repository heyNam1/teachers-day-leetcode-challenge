#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    if (!(cin >> n >> m))
        return 0;
    long long cur = 1;
    long long total = 0;
    for (long long i = 0; i < m; ++i)
    {
        long long t;
        cin >> t;
        if (t >= cur)
            total += (t - cur);
        else
            total += (n - (cur - t)); // or n - cur + t
        cur = t;
    }
    cout << total << '\n';
    return 0;
}
