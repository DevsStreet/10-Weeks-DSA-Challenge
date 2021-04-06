#include<iostream>
using namespace std;
void read_matrix(int mat[5][5],int r);
void disp_matrix(int mat[5][5],int r);


int main()
{
int row;
int mat1[5][5];
cout<<"\nEnter the no. of rows and columns in the matrix: ";
cin>>row;
read_matrix(mat1,row);
disp_matrix(mat1,row);
return 0;
}

void read_matrix(int mat[5][5],int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			mat[i][j]=0;
			else if(i>j)
			mat[i][j]=-1;
			else
			mat[i][j]=1;
		}
	}
}

void disp_matrix(int mat[5][5],int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		cout<<"\n";
		for(j=0;j<r;j++)
		cout<<"\t"<<mat[i][j];
	}
}
