//Edwin Rubio
//Assignment Program 5
//04-22-2008

#include<iostream>
using namespace std;
void extend(double *, const double *, const double *);//prototype

int main()
{
	double amount[10];
	double price[10]={10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	double quantity[10]={4, 8, 6, 7, 9, 15, 3, 5, 2, 5};

	extend(amount, price, quantity);//Calling Finction by Array Names

	cout<<" Price "<<"\t"<<" Quantity "<<"\t"<<" Amount"<<"\t"<<"\n"<<endl;

	for(int i=0;i<10;i++)//This Will Show the amount, quantity, and prices
	{
		cout<<" "<<*(price + i)<<"\t    "<<*(quantity +i)<<"\t"<<"    = "<<"\t "<<*(amount +i)<<endl;
	}
	return 0;
}
void extend(double *amt, const double *pri, const double *quan)
{ 
	for(int i=0; i<10; i++)
	{
		*(amt+i)=*(pri+i)**(quan+i);
	}
}