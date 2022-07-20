#include<iostream>
using namespace std;
main()
{
    float f=3.14f;
    double d=3.14l;                  //By default integer with a decimal point is assumed by the computer as a double
    cout<<"The value of float is: "<<f <<endl;
    cout<<"The value of float is: "<<d <<endl;
    cout<<"The size of 3.14 is" <<sizeof(3.14)<<endl;
    cout<<"The size of 3.14f is" <<sizeof(3.14f)<<endl;
    cout<<"The size of 3.14F is" <<sizeof(3.14F)<<endl;
    cout<<"The size of 3.14l is" <<sizeof(3.14l)<<endl;
    cout<<"The size of 3.14L is" <<sizeof(3.14L)<<endl;
    return 0;
}