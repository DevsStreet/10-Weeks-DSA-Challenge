 #include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	int r1,c1,r2,c2,rres,cres;
	int m1[5][5],m2[5][5],res[5][5];
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
	
	rres=r1;
	cres=c1;
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
    
	for(i=0;i<rres;i++)
	{
	 for(j=0;j<cres;j++)
      {
      	res[i][j]=0;
      	for(k=0;k<cres;k++)
      	res[i][j]+=m1[i][k] * m2[k][j];
	  }
    }
    
    cout<<"\nThe elements of the Product matrix are: ";
    	for(i=0;i<rres;i++)
	{
	 cout<<"\n";
	 for(j=0;j<cres;j++)
	{
	  cout<<"\t"<<res[i][j];
	}
    }
    
    return 0;
}
  
  

	
	
