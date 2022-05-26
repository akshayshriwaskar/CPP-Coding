//check maximum and minimum of two integers numbers
#include<iostream>
#include<conio.h>
using namespace std;
class max
{
public:
    inline int maximum (int a,int b)
    {
        return a>b? a:b;
    }
inline int minimum (int a, int b)
{
    return a<b?a:b;
}
};
void main()
{
int a,b;
max m;

clrscr();
cout<<"\n Enter two number.";
cin>>a>>b;
cout<<"\nNumber 1st:"<<a<<endl;
cout<<"\nNumber 2nd:"<<b<<endl;
cout<<"\nMaximum number is:"<<m.maximum(a,b)<<endl;
cout<<"\nMinimum is:"<<m.minimum(a,b)<<endl;
getch();
}
