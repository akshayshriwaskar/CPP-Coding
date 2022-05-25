#include<iostream>
using namespace std;
class Number
{
    public:
        Number ( )
        {
            cout<<”\n Constructor called”;
            }
            ~Number ( )
            {
                cout<<”\n Destructor called”;
                }
};

 int main( )
{
    Number Obj1;
    {
        Number Obj2;
         }//Destructor Ob2 called
          return 0; //Destructor Ob1 called
          }

