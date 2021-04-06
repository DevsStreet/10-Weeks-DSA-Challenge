/*Q.In a small company there are 5 salesmen.Each salesman is supposed
to sell 3 products.Write a Program using a 2D array to print- 
(i)The total sales by each salesman
(ii)The total sales of each item */

#include<iostream>
using namespace std;

int main()
{
	int sales[5][3],i,j,total_sales=0;
	cout<<"<<< ENTER THE DATA >>>";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter the sales of 3 items sold by Salesman "<<(i+1)<<" : ";
		for(j=0;j<3;j++)
		cin>>sales[i][j];
	}
	cout<<"\n\n<<< TOTAL SALES BY EACH SALES MAN >>>";
	for(i=0;i<5;i++)
	{
		total_sales=0;
		for(j=0;j<3;j++)
		total_sales+=sales[i][j];
		cout<<"\nTotal sales by Salesman "<<(i+1)<<" = "<<total_sales;
	}
	cout<<"\n\n<<< TOTAL SALES OF EACH ITEM >>>";
	for(i=0;i<3;i++)
	{
		total_sales=0;
		for(j=0;j<5;j++)
		total_sales+=sales[i][j];
		cout<<"\nTotal sales of Each item "<<(i+1)<<" = "<<total_sales;
		
	}
	return 0;
	}
