#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string hey = "";

        for (char c : s)
        {
            if (isalpha(c))
            {
                hey += tolower(c);
            }
        }

        string rev = hey;
        reverse(rev.begin(), rev.end());

        return rev == hey;
    }
};