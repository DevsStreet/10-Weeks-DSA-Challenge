#include <stdio.h>
#include <stdlib.h>

struct matrix{

	int *A; //A is the name of the array
	int n;//n is the length of the array
};

void set(struct matrix *m, int i, int j,int x )
{
	if(i>=j)
		m->A[i*(i-1)/2+j-1]=x;
}

void display(struct matrix m)
{
	int i;
	int j;
	for(i=1; i<=m.n;i++)
	{
		for(j=1; j<=m.n; j++)
		{
				if(i>=j)
			printf("%d ",m.A[i*(i-1)/2 + j-1]);
		else
			printf("0 ");
		}
		printf("\n");
	}
}


int main()
{
	struct matrix m;
	m.A =(int*)malloc(m.n*(m.n+1)/2*sizeof(int));
	int x;
	printf("Enter the dimention of array\n");
	scanf("%d",&m.n);

	for(int i=1;i<=m.n;i++)
	{
		for(int j=1; j<=m.n; j++)
		{
			printf("Enter the elements of the matrix\n");
			scanf("%d",&x);
			set(&m,i,j,x);
		}
	
		printf("****************\n\n");
	}
	display(m);
}