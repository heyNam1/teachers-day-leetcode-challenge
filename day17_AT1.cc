#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> hello;

    while (a--)
    {
        int y;
        cin >> y;
        hello.push_back(y);
    }

    int n = hello.size();

    int left = 0;
    int right = n - 1;

    int serejaScore = 0;
    int dimaScore = 0;

    bool isSerejaTurn = true;

    while (left <= right)
    {
        if (hello[left] >= hello[right])
        {
            if (isSerejaTurn)
                serejaScore += hello[left];
            else
                dimaScore += hello[left];
            left++;
        }
        else
        {
            if (isSerejaTurn)
                serejaScore += hello[right];
            else
                dimaScore += hello[right];
            right--;
        }

        isSerejaTurn = !isSerejaTurn;
    }

    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}