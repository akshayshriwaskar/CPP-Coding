//Manipulators in cpp
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    // int a=3,b=78,c=1233;
    // cout<<"The value of a is Without Setw: "<<a<<endl;
    // cout<<"The value of b is Without Setw: "<<b<<endl;
    // cout<<"The value of c is Without Setw: "<<c<<endl;
    
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;
    // return 0;

    //Operator Precedence
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}