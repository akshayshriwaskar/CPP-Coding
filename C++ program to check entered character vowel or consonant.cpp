#include<iostream>
using namespace std;

int main()
{
  char ch;

    cout << "Enter any character: ";
    cin >> ch;

    // Condition for vowel checking
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout << ch << " is a vowel";
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is a consonant";
    }

    return 0;
}
