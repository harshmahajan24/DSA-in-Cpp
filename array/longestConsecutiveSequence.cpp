#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            int length = 0;
            for (int j = 0; j < size; j++)
            {
                /* code */
                if (arr[j] == (arr[i] + 1)){
                    length++;
                }
            }
        }
    }
};