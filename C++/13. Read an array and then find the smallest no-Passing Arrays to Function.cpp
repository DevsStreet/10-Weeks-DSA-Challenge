#include<iostream>
using namespace std;

void read_array(int arr[],int n);
int find_small(int arr[],int n);

int main()
{
	int num[10],n,smallest;
	cout<<"Enter the size of array: ";
	cin>>n;
	read_array(num,n);
	smallest=find_small(num,n);
	cout<<"\nThe smallest no. in the array is "<<smallest;
	return 0;
}

void read_array(int arr[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] : ";
		cin>>arr[i];
	}
}

int find_small(int arr[10],int n)
{
	int i=0,small=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		small=arr[i];
	}
	return small;
}
