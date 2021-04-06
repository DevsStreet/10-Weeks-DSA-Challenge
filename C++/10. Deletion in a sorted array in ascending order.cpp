#include<iostream>
using namespace std;

int main()
{
	int i,j,n,pos,arr[10];
	cout<<"Enter the no. of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] :";
		cin>>arr[i];
	}
	cout<<"\nEnter the position to be deleted: ";
	cin>>pos;
	for(i=0;i<n;i++)
	{
		if(arr[i]==pos)
		{
			for(j=1;j<n-1;j++)
			arr[j]=arr[j+1];
		}
	}
	n=n-1;
	cout<<"The array after deletion is: ";
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] :"<<arr[i];
	}
	return 0;
}
