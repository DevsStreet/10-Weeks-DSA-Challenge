#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int r1,c1,r2,c2,rsum,csum;
	int m1[5][5],m2[5][5],sum[5][5];
	cout<<"\nEnter the no. of rows in 1st matrix: ";
    cin>>r1;
    cout<<"\nEnter the no. of columns in 1st matrix: ";
    cin>>c1;
    cout<<"\nEnter the no. of rows in 2nd matrix: ";
    cin>>r2;
	cout<<"\nEnter the no. of columns in 2nd matrix: ";
	cin>>c2;
	
	if(r1 != r2 || c1 != c2)
	{
		cout<<"OOPS! The no. of rows and columns in both the matrix must be equal";	
	}
	
	rsum=r1;
	csum=c1;
	cout<<"\nEnter the elements of the 1st matrix: ";
	for(i=0;i<r1;i++)
	{
	 for(j=0;j<c1;j++)
	{
		cin>>m1[i][j];
	}
    }
    
    cout<<"\nEnter the elements of the 2nd matrix: ";
	for(i=0;i<r2;i++)
	{
	 for(j=0;j<c2;j++)
	{
		cin>>m2[i][j];
	}
    }
    
	for(i=0;i<rsum;i++)
	{
	 for(j=0;j<csum;j++)
      sum[i][j]=m1[i][j]+m2[i][j];
    }
    
    cout<<"\nThe elements of the resultant matrix are: ";
    	for(i=0;i<rsum;i++)
	{
	 cout<<"\n";
	 for(j=0;j<csum;j++)
	{
	  cout<<"\t"<<sum[i][j];
	}
    }
    
    return 0;
}
  
  

	
	
