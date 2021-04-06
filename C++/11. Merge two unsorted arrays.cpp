#include<iostream>
using namespace std;

int main()
{
	int arr1[10],arr2[10],arr3[20];
	int i,n1,n2,m,index=0;
	cout<<"\nEnter the no. of elements in array 1: ";
	cin>>n1;
	cout<<"\nEnter the no. of elements in array 1:";
	for(i=0;i<n1;i++)
	{
		cout<<"\narr1["<<i<<"] :";
		cin>>arr1[i];
	}
	cout<<"\n\nEnter the no. of elements in array 2: ";
	cin>>n2;
	cout<<"\nEnter the no. of elements in array 2:";
	for(i=0;i<n2;i++)
	{
		cout<<"\narr2["<<i<<"] :";
		cin>>arr2[i];
	}
	
	m=n1+n2;
	for(i=0;i<n1;i++)
	{
		arr3[index]=arr1[i];
		index++;
	}
    for(i=0;i<n1;i++)
	{
		arr3[index]=arr2[i];
		index++;
	}	
	
	cout<<"\n\nThe merged array is: ";
	for(i=0;i<m;i++)
	cout<<"\narr3["<<i<<"] :"<<arr3[i];
	return 0;
}
	
	
	
