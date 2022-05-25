#include<iostream>
using namespace std;
int sum(int a=10, int b=20);
int sum(int a, int b)
{
    return (a+b);
}
int main()
{

    cout<<sum()<<endl;
    cout<<sum(50)<<endl;
    cout<<sum(50,50)<<endl;
    return 0;
}

