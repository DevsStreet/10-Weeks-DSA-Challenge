#include<iostream>
using namespace std;

int main()
{
	int a[10],n,max,min,maxpos,minpos,i,temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cout<<"\nElement "<<(i+1)<<" : ";
	  cin>>a[i];
	}
	max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;
		}
	}
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	cout<<"The array elements after interchange are: ";
	for(i=0;i<n;i++)
	{
		cout<<"\n a["<<i<<"] : "<<a[i];
	}
	return 0;
}
