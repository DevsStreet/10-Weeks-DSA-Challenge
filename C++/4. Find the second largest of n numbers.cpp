#include<iostream>
using namespace std;

int main()
{
	int i,n,arr[20],largest,second_largest;
cout<<"Enter the no. of elements in the array: ";
cin>>n;
cout<<"Enter the elements: ";
for(i=0;i<n;i++)
cin>>arr[i];
largest=arr[0];
for(i=1;i<n;i++)
{
	if(arr[i]>largest)
	largest=arr[i];
}
second_largest=arr[1];
for(i=0;i<n;i++)
{
	if(arr[i]!=largest)
	{
		if(arr[i]>second_largest)
		second_largest=arr[i];
	}
}
cout<<"\nThe largest of these numbers is: "<<largest;
cout<<"\nThe second largest of these numbers is: "<<second_largest;
return 0;
}
