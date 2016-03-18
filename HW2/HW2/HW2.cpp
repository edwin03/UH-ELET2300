#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int option_select;
	int oneCount=0;
	int twoCount=0;
	int threeCount=0;
	float hour, gross, rate, salary, manager;
	do
	{

	
	cout<< "Enter Pay Code (-1 To End):";
	cin>> option_select;
	 
	switch(option_select)
	{
		case 1: 
			cout<<"Manager Worker Selected"<<endl;
			manager=1000.00;
			cout<<"Manager Worker's Pay is $"<<setiosflags(ios::showpoint)<<manager<<endl;
				++oneCount;
			cout<<endl;
			break;
		

		case 2:
			cout<<"Hourly Worker Selected"<<endl;
			cout<<"Enter Hourly Salary:";
			cin>>rate;
			cout<<"Enter the Total Hours Worked:";
			cin>>hour;

			if (hour<=40)
				salary=rate*hour;
			else
			salary=40.00*rate+(hour-40)*1.5*rate;
			cout<<"Worker's Pay is $"<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<setprecision(2)<<salary<<endl;
			++twoCount;
			cout<<endl;
			break;
	

		case 3:
			cout<<"Commission Worker Selected"<<endl;
			cout<<"Enter Gross Weekly Sales $";
			cin>>gross;
			gross=250.00+(.06*gross);
			cout<<"Commission Worker's Pay is $:"<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<setprecision(2)<<gross<<endl;
			++threeCount;
			cout<<endl;
			break;
		case -1:
			cout<<"Total Number of Managers Paid:"<<oneCount<<endl;
			cout<<"Total Number of Hourly Workers Paid:"<<twoCount<<endl;
			cout<<"Total Number of Commission Workers Paid:"<<threeCount<<endl;
			cout<<endl;
		
		default:
			cout<<"The Entered Code is not Found"<<endl;
	
	}
	}
	
	while(option_select!=-1);
	return 0;
}
