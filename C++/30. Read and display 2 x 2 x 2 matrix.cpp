#include<iostream>
using namespace std;

int main()
{
	int arr[2][2][2],i,j,k;
	cout<<"Enter the elements of the matrix: ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			cin>>arr[i][j][k];
		    }
		}
	}
	cout<<"\n The matrix is: ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			cout<<"\n";
			for(k=0;k<2;k++)
			cout<<"\t arr["<<i<<"]["<<j<<"]["<<k<<"]="<<arr[i][j][k];
		}
	}
	return 0;
}
