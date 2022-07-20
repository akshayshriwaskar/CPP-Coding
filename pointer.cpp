#include<iostream>
using namespace std; 

main(){
    //what is pointer?:- data type which holds the address of other data types.
    int a=3;
    int*b =&a; //pointer variable
    // & ---> Address of operator or reference opeator
    // * ---> Dereference operator
     cout<<a<<endl;
     cout<<&a<<endl;
     cout<<b<<endl;
     cout<<*b<<endl;
     cout<<"The value at address b is "<<*b<<endl;
    int **c=&b; //pointer to pointer
    cout<<"The address of b is: "<<b<<endl;
    cout<<"The address of c is: "<<c<<endl;
    cout<<"The Value at address c is: "<<*c<<endl;
    cout<<"The address of b is: "<<**c<<endl;
    return 0;


}