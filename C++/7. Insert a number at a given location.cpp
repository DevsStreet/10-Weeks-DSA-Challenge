#include<iostream>
using namespace std;

int main()
{
	int i,n,num,pos,arr[10];
	cout<<"Enter the number of elements in an array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cout<<"\n"<<(i+1);
	  cin>>arr[i];
	}
	cout<<"Enter the number to be insterted: ";
	cin>>num;
	cout<<"Enter the position in which the no. should be inserted: ";
	cin>>pos;
	for(i=n-1;i>=pos;i--)
	arr[i+1]=arr[i];
	arr[pos]=num;
	n=n+1;
	cout<<"The array after insertion of "<<i+1<<" is ";
	for(i=0;i<n;i++)
	cout<<arr[i];
	return 0;
}
