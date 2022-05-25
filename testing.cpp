#include<iostream>
using namespace std;
class Employee
{
    int Emp_id;
    char Name[20];
    long Salary;

public: void Accept()
{
    cout<<"\n\tEnter Employee Id, Name and Salary : ";
    cin>>Emp_id>>Name>>Salary; } void Display()
    {
        cout<<"\n"<<Emp_id<<"\t"<<Name<<"\t"<<Salary; } };
        int main() { int i; Employee emp[3];
        //Creating Array of objects to store 3 Employees details
        for(i=0;i<3;i++)
        {
            cout<<"\nEnter details of "<<i+1<<" Employee";
            emp[i].Accept();
             }
              cout<<"\nDetails of Employees";
              for(i=0;i<3;i++) emp[i].Display();
               return 0;
               }
