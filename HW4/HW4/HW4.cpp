//Edwin Rubio
//Assignment 4

#include<iostream>
#include<string>
using namespace std;

double average (int []);//prototype functions
int highest (int []);//prototype functions
int lowest (int []);//prototype functions

int main()//Begining of Program
{
	const int tests = 100;
	int grades[tests];
	int length=-1;
	char choice;

	cout<<"\n\n\tCalculates the Average, highest, lowest, and Median Grades";

	do
	{ cout<<"\n\nEnter Test Grades(Negitive # to stop grade inputs): ";
		do
		{length++;
		cin>>grades[length];
		}
		while (grades[length]>0);
		cout<<"\n\n\tNumber \t\tGrades";
		for (int j=0;j<length;j++)
		cout<<"\n\t  "<< (j+1) <<"\t\t  "<<grades[j];

		cout<<"\n\n\tThe Class Average: "<< average (grades);//calling function
		cout<<"\n\tThe Highest Grade: "<< highest (grades);//calling function
		cout<<"\n\tThe Lowest Grade: "<< lowest (grades);//calling function
		cout<<"\n\tThe Median Grade: ";

		if(length%2!=0)//calculates median
			cout<<grades[length/2];
		else
			cout<<((grades[length/2] + grades[ (length/2) - 1 ])/2.0);
		cout<<"\n\nDo You Want to Exit(e) or Put More Grades(c): ";
		cout<<"\nEnter You Choice : ";
		cin>>choice;

		if (choice < 97)
			choice+=32;
		length = -1;
	}
	while (choice != 'e');

	return 0;

}
double average(int g[])
{
int sum=0;
int i=0;
while (g[i]>0)
{
	sum+=g[i];
	i++;
}
return ((sum*1)/i);//returns average
}
int highest (int g[])
{
	int h=g[0];
	int i=1;

	while (g[i]>0)
	{ if (h<g[i])
	h=g[i];
	i++;
	}
	return h;//returns highest grade
}
int lowest( int g[])
{
	int l=g[0];
	int i=l;

	while (g[i]>0)
	{ if(l>g[i])
	l=g[i];
	i++;
	}
	return 1;//returns lowest grade
}
