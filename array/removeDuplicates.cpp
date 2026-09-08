#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(int arr[], int n)
    {
        int i = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;
    }
};

int main(){
    int arr[6] = {1, 1, 3, 5, 6, 8};
    Solution sol;

    int k= sol.removeDuplicates(arr,6);
    cout<<"array has "<<k<<" unique elments"<<endl;
    cout<< "unique elements of array: "<<endl;
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
// in  this appraoach to remove duplicates 
//used a pointer  moves  when there is an unique element appears in the array 