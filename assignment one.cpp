#include <iostream>
#include<cmath>
using namespace std;

int main(){

//DEDCALRATION
string name_of_customer;
int customer_id;
int quantity;
double customer_money;
string buy_item;
double balance;
const double vat=0.12;
double price_of_printer=120;
double price_of_phone=350;
double price_of_table=75;
string item1="printer";
string item2="phone";
string item3="table";
double total_cost;
double total_amount_paid;


//SERVICES OFFERED ARE
cout<<"we offer two services here"<<endl;
cout<<"1)purchasing an item"<<endl;
cout<<"2)make enquiries"<<endl;
cout<<"select only one offer"<<endl;
cout<<endl;

cout<<"please what is your name"<<endl;
getline(cin, name_of_customer);
cout<<endl;

cout<<name_of_customer<<", please what is your id number"<<endl;
cin>>customer_id;
cout<<endl;

cout<<"please what do you want to buy"<<endl;
cout<<"printer =120"<<endl;
cout<<"phone =350"<<endl;
cout<<"table =75"<<endl;
cout<<endl;
cout <<"Please which item do you want to buy"<<endl;
cin>>buy_item;
cout<<endl;

cout<<"please what quantity do you want"<<endl;
cin>>quantity;
cout<<endl;

cout<<"how much do you have please "<<endl;
cin>>customer_money;
cout<<endl;



 if(customer_money>=price_of_printer){
	total_cost=(price_of_printer*quantity);
cout<<endl;
cout<<"total cost is:Ghc"<<total_cost<<endl;
cout<<endl;
total_amount_paid=(total_cost+vat);
cout<<endl;

cout<<"total amount paid is:Ghc"<<total_amount_paid<<endl;
cout<<endl;

balance=customer_money-total_amount_paid;
cout<<endl;

cout<<"balance is Ghc"<<balance<<endl;

cout<<endl;

//RECEIPT
cout<<".......CUSTOMER RECEIPT........."<<endl;
cout<<"NAME OF CUSTOMER  : "<<name_of_customer<<endl;
cout<<"CUSTOMER ID       : "<<customer_id<<endl;
cout<<"ITEM PURCHASED    : "<<item1<<endl;
cout<<"VAT               : "<<vat<<endl;
cout<<"TOTAL COST        : "<<total_cost<<endl;
cout<<"TOTAL AMOUNT PAID : "<<total_amount_paid<<endl;
cout<<"BALANCE           : "<<balance<<endl;

cout<<"..........THANK YOU FOR YOUR TRANSACTING WITH US..........."<<endl;
 
 }else if(customer_money>=price_of_phone){

total_cost=(price_of_phone*quantity);
cout<<endl;
cout<<"total cost is:Ghc"<<total_cost<<endl;
cout<<endl;
total_amount_paid=(total_cost+vat);
cout<<endl;

cout<<"total amount paid is:Ghc"<<total_amount_paid<<endl;
cout<<endl;

balance=customer_money-total_amount_paid;
cout<<endl;

cout<<"balance is Ghc"<<balance<<endl;
cout<<endl;

//RECEIPT
cout<<".......CUSTOMER RECEIPT........."<<endl;
cout<<"NAME OF CUSTOMER  : "<<name_of_customer<<endl;
cout<<"CUSTOMER ID       : "<<customer_id<<endl;
cout<<"ITEM PURCHASED    : "<<item2<<endl;
cout<<"VAT               : "<<vat<<endl;
cout<<"TOTAL COST        : "<<total_cost<<endl;
cout<<"TOTAL AMOUNT PAID : "<<total_amount_paid<<endl;
cout<<"BALANCE           : "<<balance<<endl;

cout<<"..........THANK YOU FOR YOUR TRANSACTING WITH US..........."<<endl;
}else if(customer_money>=price_of_table){
total_cost=(price_of_table*quantity);
cout<<endl;
cout<<"total cost is:Ghc"<<total_cost<<endl;
cout<<endl;
total_amount_paid=(total_cost+vat);
cout<<endl;

cout<<"total amount paid is:Ghc"<<total_amount_paid<<endl;
cout<<endl;

balance=customer_money-total_amount_paid;
cout<<endl;

cout<<"balance is Ghc"<<balance<<endl;


//RECEIPT
cout<<".......CUSTOMER RECEIPT........."<<endl;
cout<<"NAME OF CUSTOMER  : "<<name_of_customer<<endl;
cout<<"CUSTOMER ID       : "<<customer_id<<endl;
cout<<"ITEM PURCHASED    : "<<item3<<endl;
cout<<"VAT               : "<<vat<<endl;
cout<<"TOTAL COST        : "<<total_cost<<endl;
cout<<"TOTAL AMOUNT PAID : "<<total_amount_paid<<endl;
cout<<"BALANCE           : "<<balance<<endl;

cout<<"..........THANK YOU FOR YOUR TRANSACTING WITH US..........."<<endl;

 }else {
 	cout <<"Insufficient money"<<endl;
 }

    return 0;



}

