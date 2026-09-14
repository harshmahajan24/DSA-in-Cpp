#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(int arr[], int n, int target)

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

    
};

int main()
{
    int a[3] = {-1, 1, 1};
    int k = 4;

    Solution solution;
    int len = solution.longestSubarray(a, 3, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}