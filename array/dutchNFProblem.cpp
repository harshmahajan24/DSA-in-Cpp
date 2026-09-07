#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dnfSort(int arr[], int n)
    {
        int left = 0, mid = 0, right = n - 1;
        while (mid <= right)
        {
            if (arr[mid] == 2)
            {
                swap(arr[mid], arr[right]);
                right--;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 0)
            {
                swap(arr[mid], arr[left]);
                mid++;
                left++;
            }
        }
    }
};

int main(){
    int arr[3] ={2,0,1};
    Solution sol1;
    cout<<"Array before sort:"<<endl;
    for (int i = 0; i <3; i++)
    {
        cout<< arr[i]<<" ";
    }

    sol1.dnfSort(arr,3);

    cout<<"\nArray after sort: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<< arr[i]<<" ";
    }

    

    return 0;
}

// in this approach 
//swap number -- change psotion -- sort or classify number -- pointers