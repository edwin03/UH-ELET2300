//Edwin Rubio
//04-29-2008
//Assignment 6

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class TollBooth//class difinition
{
public:
	TollBooth();//constructor
	void payingCar();
	void nopayCar();
	void display();

private:
	int carTotal;
	float cash;
};
TollBooth::TollBooth()//constructor
{
	carTotal = 0;
	cash = 0.0;
}
void TollBooth::payingCar()
{
	carTotal++;
	cash += 0.5;
}
void TollBooth::nopayCar()
{
	carTotal++;
}
void TollBooth::display()
{
	cout<<"\n\nNumber Of Cars Passed:  "<<carTotal<<"\nTotal Amount Of Money Collected:  $" <<setw(5)<<fixed<<setprecision(2)<<cash;
}

int main()
{
	TollBooth toll;
	char ch;


	cout<<"\tTollbooth Calculator\n\n"<<endl;
	cout<<"Press 0 for non-paying cars"<<endl;
	cout<<"Press 1 for paying cars"<<endl;
	cout<<"Press Esc to Exit program"<<endl;


	do
	{
		ch=getch();

		if(ch=='0')
			toll.nopayCar();
		if(ch=='1')
			toll.payingCar();
	}
	while (ch != 27);

	toll.display();

	cout<<"\n\n\t"<<endl;

	return 0;
}