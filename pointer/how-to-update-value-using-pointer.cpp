#include <iostream>
using namespace std;

// value updation using function
int update(int *x)
{
    *x = 30;
    return *x;
}
int main()
{
    int a = 10;

    cout << "value of A :" << a << endl;

    int *ptr = &a;
    *ptr = 20;
    cout << "value of A before update:" << a << endl;

    cout << "value after updated by function:" << update(&a) << endl;
}