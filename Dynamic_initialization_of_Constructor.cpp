#include<iostream>
using namespace std;
class Number
{
int n;
public:
Number(int x)
{
n = x;
}
void display()
{
cout<<"n = " <<n;
}
};
int main( )
{
int a;
cout<<"\n Enter the value of a:";
cin>>a;
Number Obj(a);
Obj.display();
return 0;
}
