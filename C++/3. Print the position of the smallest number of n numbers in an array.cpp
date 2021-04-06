#include<iostream>
using namespace std;

int main()
{
	int i,n,pos,small,arr[20];
	cout<<"Enter the size of an array: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	small=arr[0];
	pos=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	cout<<"The smallest element is: "<<small;
	cout<<"The position of the smallest element is: "<<pos;
	return 0;
}
