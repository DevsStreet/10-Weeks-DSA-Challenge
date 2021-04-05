//Sieve of Eratosthenes

#include<iostream>
#include<limits.h>
using namespace std;

void sieve(int n)
{
vector<bool> isPrime(n+1,true);
for(int i=2; i<=n; i++)
{
	if(isPrime(i))
	{
		cout<<i<<" ";
		for(int j=i*i;j<=n;j=j+i)
		isPrime[j]=false;
	}
	}	

int main()
{
	int n;
	cin>>n;
	sieve(n);
	return 0;
}
