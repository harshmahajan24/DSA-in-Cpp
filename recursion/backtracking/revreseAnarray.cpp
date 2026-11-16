#include <bits/stdc++.h>
using namespace std;
void revreseArry(int *arr, int forward, int backward){
    if (forward == backward || forward > backward)
    {
        return;
    }
    revreseArry(arr,forward+1,backward-1);
    swap(arr[forward],arr[backward]) ;  
}

int main (){
    int arr[]= {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = size -1 ;

    cout<<"array : ";
    for(int i =0 ; i<size; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    revreseArry(arr,start,end);

    cout<<"revesed array : ";
    for(int i =0 ; i<size; i++ ){
        cout<<arr[i]<<" ";
    }


    return 0;
}