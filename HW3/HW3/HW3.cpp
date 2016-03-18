//Edwin Rubio

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double commission(double);// function prototype
double sales();//function prototype

int main()
{ 
	double x;
	string q;
	cout<<setw(10)<<setprecision(2)<<setiosflags(ios::fixed);

	do
	{
		x= sales();// calls second function
		if (x>0)
	{	cout<<"Your Sales Total is $ "<<x<<endl;
		x=commission(x);//calls first function
		cout<<"Your Commission $ "<<x<<endl;
	}
		else
			break;
	}
	while (x>0);
	cout<<"Do You Which To Quit Program (Y/N)?";
	cin>>q;
	if ((q == "Y")||(q == "y"))
	cout<<"The End"<<endl;

	else
	main();
	return(0);
}

double sales()
{
double n;
cout<<"Enter Sales Amount (Enter Negetive Number to Quit) $ ";
cin>>n;
return n;
}

double commission(double x)
{
double commission;

if(x>=3000.00)
{commission = .05*x;}
else if (x >= 2000.00)
{commission = .045*x;}
else if (x >= 1000.00)
{commission = .04*x;}
else if (x >= 0)
{commission = .035*x;}
return (commission);
}
			