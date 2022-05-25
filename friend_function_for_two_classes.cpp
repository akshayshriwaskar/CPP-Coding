//C++ program to illustrate use of friend function for two classes.
#include <iostream>
using namespace std;
class Square; // forward declaration of a class
class Rectangle { int width, height;
public:
    void setvalue(int w, int h){width=w; height=h;} friend void display(Rectangle &, Square &);
    };

class Square
{
    int side;
    public:
         void setvalue(int s)
         {
             side=s;
         } friend void display(Rectangle &, Square &);
         }; void display(Rectangle &r, Square &s)
         {
             cout<< "Rectangle Area: " <<r.width * r.height<<endl;
             cout<< "Square Area: " <<s.side * s.side<<endl; }
             int main ()
             {
                 Rectangle rec;
                 rec.setvalue(5,10);
                 Square sq;
                 sq.setvalue(5);
                 display(rec,sq);
                 return 0;
                 }
