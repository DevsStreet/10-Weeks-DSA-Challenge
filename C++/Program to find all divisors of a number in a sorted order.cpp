//Program to find all divisors of a number in a sorted order

#include<iostream>
#include<limits.h>
using namespace std;

int printDivisors(int n)
{
	int i=1;
	for(i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	for(;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<(n/i)<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	printDivisors(n);
	return 0;
}
