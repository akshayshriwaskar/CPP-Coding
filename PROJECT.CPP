#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //quantity
    int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchiken=0;
    //food items sold
    int sroos=0; spasta=0, sburger=0, snoodles=0, sshake=0, schiken=0;
    //Total proce of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0,
Total_shake=0,Total_chiken=0;

cout<<"\n\t Quantity of items we have";
cout<<"n Rooms available:";
cin>>qrooms;
cout<<"n Quantity of pasta:";
cin>>qpasta;
cout<<"\n Quality of noodles:";
cin>>qnoodles;
cout<<"\n Quantity of shake:";
cin>>qshake;
cout<<"\n Quantity of chicken-roll:";
cin>>qpasta;
cout<<"\n\t\t Please select from the menu options";
cout<<"\n\n1)Rooms";
cout<<"\n2)Pasta";
cout<<"\n3) Burger";
cout<<"\n4) Noodles";
cout<<"\n5) Shake";
cout<<"\n6) Chicken-roll";
cout<<"\n7) Information regarding sales and collection";
cout<<"\n8) Exit";

cout<<"\n\n Please Enter your Choice! ";
cin>>choice;
switch(choice)
{
case 1:
    cout<<"\n\n Enter the number of rooms you want:";
    cin>>quan;
    if(qrooms-srooms>=quant)
    {
        srooms=srooms+quant;
        total_room=total_room+quant*1200);
        cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
    }
    else
    cout<<"\n\tOnly"<<qrooms-srooms<<"Rooms remaining in hotel";
    break;

case 2:
    cout<<"\n\n Enter pasta Quantity:";
    cin>>quant;
    if(qpasta-spasta>=quant){
        spasta=spasta+quant;
        total_room=total_room+quant*1200);
        cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
    }
    else
        cout<<"\n\tOnly"<<qpasta-spasta<<"Pasta remaining in hotel";
    break;
    }
}
}
