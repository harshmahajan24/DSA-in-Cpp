#include <bits/stdc++.h>
using namespace std;

//pre-positioning
int hashFunction(int arr[], int queryNumber , int n){
    int hash[13] = {0};       // here we ssumed that the array has max element = 12 

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] +=1;
    }

    return hash[queryNumber];
}

int main() {

    int n;
    cout<< "enter size of array:"<<endl;
    cin >> n;

    int arr[n];
    cout<<"enter element of array:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout<<"enter number of queries :"<<endl;
    cin >> q;

    cout<<"enter element to check there frequency:"<<endl;
    
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout <<"frequeny: "<< hashFunction(arr,number,n)<< endl;
    }
    return 0;
}
