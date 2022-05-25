//C++ program to illustrate use of Scope Resolution Operator (::)
#include<iostream>
using namespace std;
int num=30;
int main()
{
int num=10;
cout<<"\nValue of global num is:"<<::num;
cout<<"\nValue of local num is:"<<num;
return 0;
}
