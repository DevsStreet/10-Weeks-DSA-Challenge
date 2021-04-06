#include<iostream>
using namespace std;

int main()
{
	int i,n,pos,arr[10];
	cout<<"Enter the no. of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] :";
		cin>>arr[i];
	}
	cout<<"\nEnter the position from which the no. has to be deleted: ";
	cin>>pos;
	for(i=pos;i<n-1;i++)
	arr[i]=arr[i+1];
	n--;
	cout<<"\nThe array after deletion is: ";
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] :"<<arr[i];
	}
	return 0;
}
