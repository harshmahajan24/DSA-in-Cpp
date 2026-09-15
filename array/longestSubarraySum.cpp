#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // brute force approach:
    int longestSubarrayBrute(int arr[], int n, int target)

    {
        int length = 0;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                // length = j - i + 1;
                sum += arr[j];
                if (sum == target)
                {
                    length = max(length, j - i + 1);
                }
            }
        }

        return length;
    }

    int longestSubarrayOptimal(int arr[], int n, int target)
    {
        int left = 0;
        int right = 0;
        int sum = 0;
        int length = 0;

        while (right < n)
        {
            sum += arr[right];
            while (left <= right && sum > target)
            {
                sum = sum - arr[left];
                left += 1;
            }

            if (sum == target)
            {
                length = max(length, right - left + 1);
            }
            right++;
        }
        return length;
    }
};

int main()
{
    int a[5] = {2, 1, -1, -1, 2};
    int k = 4;

    Solution solution;
    int len = solution.longestSubarrayOptimal(a, 5, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}