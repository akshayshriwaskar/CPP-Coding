#include<iostream>
#define PI 3.141
using namespace std;

int main()
{

  int side, area;

   cout << "Enter the Length of Side : ";
   cin >> side;

  // Formula to calculate area of square
   area = side * side;
   cout << "Area of Square : "<< area;

   return 0;
}
