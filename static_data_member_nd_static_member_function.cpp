//program to illustrate use of static data member and static member function.
#include<iostream>
using namespace std;
class staticdemo
{
private:
    static int num;
public:
    static void display()
    {
        cout<<"value of num is:"<<num<<endl; //accessing static data members
    }
};
int staticdemo::num=10; //static data member definition and initialization outside class
int main()
{
    staticdemo::display();
    return 0;
}
