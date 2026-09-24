#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMajorElement(vector<int> &nums)
    {
        int threshold = nums.size() / 2;
        unordered_map<int, int> mp;
        for (int value : nums)
        {
            mp[value]++;
            if (mp[value] > threshold)
            {
                /* code */
                return value;
            }
        }
        return -1;
    }

    int optimalSOlution(vector<int> &nums)
    {
        int balance = 0;
        int candidate = 0;
        for (int value : nums)
        {
            if (balance == 0)
            {
                candidate = value;
            }

            if (value == candidate)
            {
                balance++;
            }
            else
            {
                balance--;
            }
        }
        return candidate;
    }
};

int main()
{
    vector<int> nums = {2, 1, 1};

    // instance for class Solution
    Solution sol;

    cout << sol.findMajorElement(nums) << '\n';
    cout << sol.optimalSOlution(nums) << '\n';

    return 0;
}