#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a;

    vector<int> hello;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        hello.push_back(a);
    }

    int threshold = hello[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (hello[i] >= threshold && hello[i] > 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}