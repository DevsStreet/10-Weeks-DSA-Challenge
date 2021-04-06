#include<iostream>
using namespace std;
void disp(int (*)[3]);

int main()
{
	int i,j,mat[3][3];
	cout<<"Enter the elements of the matrix: ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat[i][j];
		}
	}
	disp(mat);
	return 0;
}

void disp(int (*)[3])
{
	int i,j;
	cout<<"\nThe elements of the matrix are: ";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		cout<<"\t"<<(*(*mat+i)+j);
	}
}
