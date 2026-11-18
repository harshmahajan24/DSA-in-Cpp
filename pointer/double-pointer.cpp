#include <iostream>
using namespace std;

int main (){
    int arr[] ={1,3,4,5,6,7};
    int* ptr = arr;
    int** parPtr = &ptr;


    // cout<<arr<<endl;//adress of arr[0]
    // cout<<*arr<<endl;//value at the adress of arr[0]
    // cout<<&arr<<endl;//adress of arr[0]
    // cout<<ptr<<endl;//adress of arr[0]
    // cout<<*(ptr+2)<<endl;//value at the adrress held by 'ptr+2' that is arr[2]
    // cout<<parPtr<<endl;//value stored in variable 'parPtr' that is adress of 'ptr'
    // cout<<&ptr<<endl;//address of ptr 
    // cout<<*parPtr<<endl;//value at the adrress held by 'parPtr' that is adress of arr[0]
    // cout<<**parPtr<<endl;//Value at the address stored in the pointer that is stored in parPtr.
    // cout<<&parPtr<<endl;//address of  parPtr.

    return 0;

}