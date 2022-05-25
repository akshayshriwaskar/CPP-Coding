//To illustrate the use of Parameterized Constructor.
#include<iostream>
class Number
{
    int n;
    public:
        Number(int x ) //Parameterized Constructor
        {
            n = x;
            }
        };
int main( )
{
    Number Obj1 = Number(50); // Explicit call
    Number Obj2(100); // Implicit call
}
