#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> ans;
    vector<int> giftBY(n + 1);
    while (n--)
    {
        cin >> a;
        ans.push_back(a);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        giftBY[ans[i]] = i + 1;
    }

    for (int i = 1; i < giftBY.size(); i++)
    {
        cout << giftBY[i] << " ";
    }

    return 0;
}

/*
4
2 3 4 1
4 1 2 3

*/