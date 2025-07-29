#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;
        int next;
        for (int i = 0; i < s.length(); i++)
        {
            int value = roman[s[i]];

            if (i + 1 < s.length())
            {
                int next = roman[s[i + 1]];
            }
            else
            {
                next = 0;
            }

            if (total < next)
            {
                total -= next;
            }
            else
            {
                total += next;
            }
        }
        return total;
    }
};
