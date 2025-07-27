#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
    static bool comparePairs(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> hello1;
        vector<pair<int, int>> yoyo;
        vector<int> result;

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            hello1[nums[i]]++;
        }

        for (auto entry : hello1)
        {
            yoyo.push_back({entry.first, entry.second});
        }

        sort(yoyo.begin(), yoyo.end(), comparePairs);

        for (int i = 0; i < k; i++)
        {
            result.push_back(yoyo[i].first);
        }

        return result;
    }
};