#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int arr[20],i,n,j;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter any "<<n<<" numbers in the array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Duplicate values are: ";
	for(i=0;i<n;i++)
	{
		for(j=j+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<"\n"<<arr[i];
			}
		}
	}
	return 0;
}
