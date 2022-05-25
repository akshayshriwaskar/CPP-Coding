#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"nAfter swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
//functon definition to swap numbers
void swap(int* num1, int*num2)
{
    int t;
    t=*num1;
    *num1=*num2;
    *num2=t;
}
