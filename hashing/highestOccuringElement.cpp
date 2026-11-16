#include <bits/stdc++.h>
using namespace std;

// //pre-positioning
// int hashFunction(int arr[], int queryNumber , int n){
//     int hash[13] = {0};       // here we ssumed that the array has max element = 12 

//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] +=1;
//     }

//     return hash[queryNumber];
// }

int highFrequencyElement(int arr, int n){

    int hash[13] = {0};       // here we assumed that the array has max element = 12 

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] +=1;
    }

    int maxFreq = 0;
    int minFreq = n;

    int maxFreqElement ;
    int minFreqElement ;




    for (int i = 0; i < 13; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            maxFreqElement = i;
        }
        
    }
    


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
