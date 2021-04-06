#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int *ptr,i;
	ptr=&arr[2];
	*ptr=-1;
	*(ptr+1)=0;
	*(ptr-1)=1;
	cout<<"Array is: ";
	for(i=0;i<5;i++)
	cout<<*(arr+i);
	return 0;
	}
