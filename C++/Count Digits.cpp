//Program to count number of digits in a given number
#include<iostream>
#include<limits.h>
using namespace std;

int CountDigits(int x)
{
	int res=0;
	while(x>0)
	{
		x=x/10;
		res++;
	}
	return res;
}
int main()
{
	int number;
	cin>>number;
	cout<<CountDigits(number);
	return 0;
}
