#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,arr[20];
cout<<"Enter the number of elements in the array: ";
cin>>n;

for(i=0;i<n;i++)
{
cout<<"Element "<<(i+1)<<" is : ";
cin>>arr[i];
}
cout<<"The elements in the array are: ";
for(i=0;i<n;i++)
cout<<"\t"<<arr[i];
getch();
}
