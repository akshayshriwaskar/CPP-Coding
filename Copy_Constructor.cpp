#include<iostream>
class Number
{
    int n;
    public:
        Number (int x )
        {
            n = x;
            }
            Number (Number &N) //Copy Constructor
            {
                n= N.n;
                }
                };
int main( )
{
Number Obj1(10), Obj2(Obj1);
return 0;
}
