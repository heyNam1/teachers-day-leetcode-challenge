#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int yo = n;
    int a;
    double sum = 0;
    while (n--)
    {
        cin >> a;
        sum += a;
    }

    double ans = sum / yo;
    cout << fixed << setprecision(12) << ans;
    return 0;
}