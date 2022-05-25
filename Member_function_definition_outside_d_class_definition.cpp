//Member function definition outside the class definition:
#include<iostream>
using namespace std;
class square
{

public:
    float side;
    float area();
};
float square::area()
{

    return (side*side);
}
int main()
{
    square obj;
    obj.side=5.5;
    cout<<"square side lengh is:"<<obj.side<<"\n";
    cout<<"Area of square is:"<<obj.area();
    return 0;
}
