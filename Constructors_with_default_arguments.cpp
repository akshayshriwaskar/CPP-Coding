#include<iostream>
#include<string>
#include<stdlib.h>
#include<strings.h>
class Number
{
    int m, n;
    public:
        Number(int x, int y=100 )
        {
            m = x;
            n=y;
            }
            class MyString
            {
                Char *Str;
                int len;
                public:
                    MyString ()
                    {
                        len=0;
                        Str=new char [len+1];
                        }
                        MyString (char *S)
                        {
                            len=strlen(S);
                            Str=new char [len+1];
                            Strcpy(Str, S);
                            }
                            void Concatenate(MyString &S1, MyString &S2)
                            {
                                len=S1.len+S2.len;
                                delete Str;
                                Str=new char [len+1];
                                Strcpy(Str, S1.Str);
                                Strcat(Str, S2.Str);
                                cout<<”String =”<<Str;
                                }
                                };
                                int main( )
{
    MyString Obj1(“Computer”), Obj2(“Application”),
    Obj3; Obj3.Concatenate(Obj1, Obj2);
return 0;
}
