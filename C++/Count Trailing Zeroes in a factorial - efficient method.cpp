// Program to Count Trailing Zeroes in 
// a factorial of a number
#include<iostream>
#include<limits.h>
using namespace std;

int CountTrailingZeroes(int n)
{
	int res=0;
	
	for(int i=5;i<=n;i=i*5)
	{
	 res = res + (n/i);
	}
	return res;
}
int main()
{
	int number;
	cin>>number;
	cout<<CountTrailingZeroes(number);
	return 0;
}
