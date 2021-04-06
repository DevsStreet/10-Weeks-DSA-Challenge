#include<iostream>
using namespace std;

int main()
{
	int arr[2][2]={11,22,33,44};
	int i,j;
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		cout<<"\t"<<arr[i][j];
	}
	return 0;
}
