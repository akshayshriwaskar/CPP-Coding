//C++ program to illustrate use of objects as a function argument, function returning object and friend function.
# include <iostream>
using namespace std;
class Demo
{
int x,y;
public:
void Accept();
// friend function declaration with objects as arguments and returning object
friend Demo sum (Demo, Demo);
void Display();
};
Demo sum(Demo obj1, Demo obj2)
{
Demo obj3;
obj3.x=obj1.x+obj2.x;
obj3.y=obj1.y+obj2.y;
return obj3; //function returning object
}
int main()
{
Demo obj1, obj2, obj3;
obj1.Accept();
obj2.Accept();
obj3=sum(obj1,obj2); //call to a friend function
obj3.Display();
return 0;
}
void Demo::Accept()
{
cout<<"\nPlease enter value of x and y :";
cin>>x>>y;
}
void Demo::Display()
{
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
}
