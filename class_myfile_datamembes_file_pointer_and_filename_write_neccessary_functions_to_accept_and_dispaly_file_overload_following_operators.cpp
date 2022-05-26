#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAXSIZE (10)

class myfile
{
    file*fp;
    char fn[MAXSIZE]
};
    myfile (char*fname)
    {
        strcpy(fn,fname);
    }
    myfile operator +(myfile);
    void operator !();
    void display();
};
void myfile::display()
{
    fp=fopen(fn,"r");
    char ch;
    while ((ch=fgetc(fp))!=EOF)
    {
        cout<<ch;
    }
    fclose(fp);
}
void myfile::operator!()
{
    myfile f4("sy.txt");
    char ch;
    fp=fopen(fn,"r");
    f4.fp=fopen(f4.fn,"w");
    while((ch=getc((fp)))!=EOF)
    {
        if(isupper(ch))
            fputc(tolower(ch),f4.fp);
        else if(islower(ch))
            fputc(toupper(ch),f4.fp);
        else
            fputc(ch,f4.fp);
    }
    fclose(fp);
    fclose(f4.fp);
    remove("abc.txt");
    rename("sy.txt","abc.txt);
}
myfile myfile::operator + (myfile f2)
{
    myfile f3("abc.txt");
    fp=fopen(fn,"r");
    f2.fp=fopen(f2.fn,"r");
    f3.fp=fopen(f3.fn,"w");
    char ch;
    while ((ch=fgetc(fp))=EOF)
    {
        fputc(ch,f3.fp);
    }
    fclose(fp);
    while((ch=fgetch(f2.fp))!=EOF)
    {
        fputc(ch,f3.fp);
    }
    fcloseall();
    return f3;
}
int main(){
myfile f1("xyz.txt");
myfile f2("1mn.txt");
myfile f3 ("abc.txt");
clrscr();
cout<<"first file \n";
f2.display();
f3=f1+f2;
cout<<"\n After concatenation file is";
f3.display()
cout<<"\n after changes case\n";
!f3;
f3.display();
getch();
return 0;
}
