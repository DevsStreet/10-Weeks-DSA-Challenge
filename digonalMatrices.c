#include <stdio.h>
#include <stdlib.h>

struct matrix 
{
	int *A;
	int n;
};


void get(struct matrix *m, int i, int j, int x)
{
	if(i==j)
	{
		m->A[i-1]=x;
	}
}

void display(struct matrix m)
{
	int i;
	int j;
	for(i=1; i<=m.n;i++)
	{
		for(j=1; j<=m.n; j++)
		{
			if(i==j)
			printf("%d ",m.A[i-1]);
		else
			printf("0 ");
		}
		printf("\n");
	}
}

int main()
{
	struct matrix m;
	m.n=4;

	//Printing the matrix dinamiclly.
	m.A =(int*)malloc(m.n*m.A[10]*sizeof(int));
	get(&m,1,1,8);
	get(&m,2,2,9);
	get(&m,3,3,7);
	get(&m,4,4,9);
	display(m);
}
