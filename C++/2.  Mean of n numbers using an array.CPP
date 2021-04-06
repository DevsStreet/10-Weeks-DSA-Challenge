#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,arr[20],sum=0;
float mean=0.0;
clrscr();
cout<<"Enter the number of elements in the array: ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Element "<<(i+1)<<" is : ";
cin>>arr[i];
}
for(i=0;i<n;i++)
sum+=arr[i];
mean =(float)sum/n;
cout<<"The sum of the array elements are: "<<sum;
cout<<"\nThe mean of the array elements are: "<<mean;
getch();
}
