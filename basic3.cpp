#include<iostream>
using namespace std;
int main()
{
    string s; //datatype varname
    cout<<"Enter your name: ";
    getline(cin,s); //when we want to take the input of the string
    cout<<"you have entered: ";
    cout<<s<<endl;
    s.push_back('Y');
    cout<<"After using push back: "<<s<<endl;
    s.pop_back();
    cout<<"After using pop back function: "<<s<<endl;
    return 0;
}
