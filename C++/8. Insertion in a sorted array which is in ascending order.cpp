#include<iostream>
using namespace std;

int main()
{
	int i,n,j,num,arr[10];
	cout<<"Enter the number of elements in the array: ";
	cin>> n;
	for(i=0;i<n;i++)
	{
	cout<<"\nElement "<<(i+1)<<" is : ";
	cin>>arr[i];
    }
	cout<<"\nEnter the element to be inserted: ";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]>num)
		{
			for(j=n-1;j>=1;j--)
			arr[j+1]=arr[j];
			arr[i]=num;
			break;
		}
	}
	n=n+1;
	cout<<"\nThe array after insertion of "<<num<<" is ";

	for(i=0;i<n;i++)
	{
	cout<<"\nElement "<<(i+1)<<" is : ";
	cout<<arr[i];
}
	return 0;
}
	
