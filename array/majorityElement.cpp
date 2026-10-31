/*I use Boyer–Moore voting to find the majority element in one pass. 
I maintain a candidate and a balance: matching values increase the balance, 
and nonmatching values decrease it. When the balance becomes zero,
I choose the current value as the new candidate.
This effectively removes pairs of different values; 
since the guaranteed majority appears more than all other values combined,
it cannot be fully canceled and is the final candidate.*/

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
