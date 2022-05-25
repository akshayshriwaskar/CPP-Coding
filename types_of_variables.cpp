#include<iostream>
#include<conio.h>
int b=20;       //global variable
static int d=40;
using namespace std;
main(void)
{

    int a=10;         //local variable
    static int c=30; ; //static local variable
    cout<<a<<" " <<b<<" " <<c;
    getch();
}
