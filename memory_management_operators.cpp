//C++ program to illustrate use of memory management operators.
#include<iostream>
using namespace std;
int main()
{
    int*ptr;
    ptr=new int;
    int *arr_ptr=new int[5];
    *ptr=100;
    cout<<*ptr<<endl;
    int i;
    for (i=0;i<5;i++)
    {
        arr_ptr[i]=i+1;
    }
    cout<<arr_ptr[0];
    delete ptr;
    delete []arr_ptr;
    return 0;
}
