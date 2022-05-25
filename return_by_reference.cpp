//program to illustrate use of return by reference.
#include<iostream>
using namespace std;
int n;
int & test();
int main()
{

    test()=10;
    cout<<n;
    return 0;
}
int&test()
{
    return n;
}
