#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void threeSum(int arr[], int target, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == target)
                    {
                        cout << "["
                             << arr[i] << ", "
                             << arr[j] << ", "
                             << arr[k] << "]" << endl;
                    }
                }
            }
        }
    }
};

int main()
{
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    Solution sol1;
    int sum = 0;

    sol1.threeSum(arr, sum, 6);
    return 0;
}