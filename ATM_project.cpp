#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstdlib>
using namespace std;
class atm_management
{
	char y;
	int balance=100000;
	public:
		void deposite_money();
		void withdraw_money();
		void display_account();
		void pin_change();
};
void atm_management::deposite_money()
{
	system("color f5");
	int depos,depos_var1;
	cout<<"\n\tEnter how much money you want to deposite:-" ;
	cin>>depos;
	balance=balance+depos;
	cout<<"\n\tTotal amount you deposite:-\t"<<balance;
}
void atm_management::display_account()
{
	system("color f6");
	cout<<"\n\tType of account that you open::-\t"<<y;
	cout<<"\n\tAmount you deposite::-\t"<<balance;
}
void atm_management::withdraw_money()
{
	system("color f6");
	float amount;
	cout<<"\n\tWithdraw::-";
	cout<<"\n\tEnter amount to withdraw:-";
	cin>>amount;
	balance=balance-amount;
	cout<<"\n\tTotal amount is left:-"<<balance;
}
void atm_management::pin_change()
{
	int re_pin,new_pin,pin_num1;
	cout<<"\n\tEnter the current pin number:-";
	cin>>pin_num1;
	cout<<"\n\tEnter the new pin number:-";
	cin>>new_pin;
	cout<<"\n\tEnter the Retype new  pin number:-";
	cin>>re_pin;
	if(pin_num1==new_pin || new_pin == re_pin)
	{
		cout<<"\n\tYour pin is successfully change:-";
	}
	else
	{
		cout<<"\n\tyour pin is not matched:-";
	}
}
int main()
{
	start:
	int ch,x,pin_num=1234;
	atm_management obj;
	system("color f4");
	cout<<"\n\t\t\t\t\t\t********************";
	cout<<"\n\t\t\t\t\t\tWelcome to SBI Bank.";
	cout<<"\n\t\t\t\t\t\t********************";
	cout<<"\n\n\t\t\t\t\t\tEnter your pin number:- ";
	cin>>pin_num;
	if(pin_num==1234)
	{
	do
	{
		cout<<"\n\t\t\t*     1.Deposite  money         *";
		cout<<"\n\t\t\t*     2.Withdraw  money         *";
		cout<<"\n\t\t\t*     3.Display  account        *";
		cout<<"\n\t\t\t*     4.Pin Change              *";
		cout<<"\n\t\t\t*     5.Exit                    *";
		cout<<"\n\n\t\tselect the option from above:-";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\t\t2)deposite money:";
			obj.deposite_money();
			break;
			case 2:cout<<"\t\t3)withdraw money:";
			obj.withdraw_money();
			break;
			case 3:cout<<"\t\t4)Display account:";
			obj.display_account();
			break;
			case 4:cout<<"\t\t5)Pin change:";
			obj.pin_change();
			break;
			case 5:
				if(ch==5)
				{
					exit(1);
				}
			default:
				cout<<"This is not exit try again\n ";
			}
	cout<<"\n\n\tDo you want to select next option then press :y\n";
	cout<<"\n\n\tif you want to exit then press: N";
	x=getch();
	if(x=='n'||x=='N')
	exit(0);
	}
	while(x=='y'|| x=='Y');
}
else
{
	cout<<"sory your pin number is not match please try again!!";
	goto start;
}
}
