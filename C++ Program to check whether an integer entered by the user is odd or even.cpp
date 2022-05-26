#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // True if remainder is 0
    if( number%2 == 0 )

        cout<< number << " is an even number";
    else
       cout<< number << " is an odd number";

    return 0;
}
