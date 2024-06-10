#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
main ()
{

string moviename ;
double adultticketprice,childticketprice;
int  noofadultticketsold,noofchildticketsold;
double percentagedonation, grossamount, amountdonated, netsaleamount;
 cout << fixed << showpoint << setprecision(2);
 cout << "Enter the movie name ";
 getline(cin, moviename);
 cout << endl;

cout << "Enter the price of a adult ticket: ";
cin >> adultticketprice;
cout << endl;

cout << "Enter the price of a child ticket: ";
cin >> childticketprice;
cout << endl;

cout << "Enter the no of a adult ticket sold: ";
cin >> noofadultticketsold;
cout << endl;

cout << "Enter the no of child ticket sold: ";
cin >> noofchildticketsold;
cout << endl;

cout<< "Enter donation rate";
cin >> percentagedonation;
cout << endl;
 
grossamount=adultticketprice*noofadultticketsold+noofchildticketsold*childticketprice;

amountdonated=(grossamount*percentagedonation)/100;

netsaleamount=grossamount-amountdonated;

for(int i=0;i<=10;i++)
{
 cout<<"_*_";
}
cout<<""<<endl;

cout << setfill('.') << left << setw(35) << "Moviename"<< right << moviename <<endl;

cout << setfill('.')<< left << setw(35) << "no of tickets sold"<< right << noofadultticketsold+noofchildticketsold <<endl;

cout <<setfill('.')<< left << setw(35) << "Gross amount "<< right <<"$" << grossamount <<endl;

cout << setfill('.')<<left << setw(35) << "percentage of grossamount donated"<< right << percentagedonation 
<< "%"<<endl;

cout << setfill('.')<< left << setw(35) << "Netsale  "<< right << "$" << netsaleamount  <<endl;
}
