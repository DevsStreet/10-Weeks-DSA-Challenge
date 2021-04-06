#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int number=0, digit[10],numofdig,i;
	
	cout<<"Enter the no. of digits: ";
	cin>>numofdig;
	for(i=0;i<numofdig;i++)
	{
		cout<<"\nEnter the digit at position "<<(i+1)<<" : ";
		cin>>digit[i];
	}
	
	for(i=0;i<numofdig;i++)
	{
		number=number+digit[i]*pow(10,i);
	}
	cout<<"\nThe number is: "<<number;
	return 0;
}
