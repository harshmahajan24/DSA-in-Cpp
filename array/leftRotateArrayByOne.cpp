#include <bits/stdc++.h>
using namespace std;

class Rotate
{

public:
    void leftRotateArrayByOne(int arr[], int n)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                arr[i] = temp;
            }
            else
            {
                arr[i] = arr[i + 1];
            }
        }
    }
};
int main()
{
    int arr[6] = {1, 2, 3, 5, 6, 8};
    Rotate lr;

    cout << "Before Rotation: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    lr.leftRotateArrayByOne(arr, 6);

    cout << "\nAfter rotation:  ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
