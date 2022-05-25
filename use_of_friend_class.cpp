#include <iostream>
using namespace std;
class A
{
    int num;
    public:
        void setvalue(int i)
        {
             num=i;
         }
friend class B;
//making B class, a friend class of A class
};
class B
{
    public: void display(A &a)
    {
        cout<<"Value of num is : "<<a.num;
         }
          };
          int main()
          {
              A a_obj;
              a_obj.setvalue(10);
              B b_obj;
              b_obj.display(a_obj);
              return 0;
              }
