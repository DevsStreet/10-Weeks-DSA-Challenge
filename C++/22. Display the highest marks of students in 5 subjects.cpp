#include<iostream>
using namespace std;

int main()
{
	int marks[5][3],i,j,max_marks;
	
	for(i=0;i<5;i++)
	{
		cout<<"\n\nEnter the marks obtained by Student "<<(i+1)<<" : ";
		for(j=0;j<3;j++)
		{
			cout<<"\nMarks in Subject "<<(j+1)<<" : ";
			cin>>marks[i][j];
		
		}
	cout<<"\n";	
	}
	for(j=0;j<3;j++)
	{
		max_marks=-99;
		for(i=0;i<5;i++)
		{
			if(marks[i][j]>max_marks)
			max_marks = marks[i][j];
		}
		cout<<"\nThe highest marks obtained in the subject "<<(j+1)<<" is : 0"<<max_marks;
	}
	return 0;
}
