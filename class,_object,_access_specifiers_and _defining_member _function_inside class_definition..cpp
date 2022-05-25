#include<iostream>
using namespace std;
class square
{
public:   //access specifier
float side;
float area() //member function denition inside the class
{
    return(side*side);
}
};
int main() //main function
{
    square obj; //object
    obj.side=5.5; //accessing public data members outside class
    cout<<"square side lengh is:"<<obj.side<<"\n";
    cout<<"Area of square is:"<<obj.area();
    return 0;
}
