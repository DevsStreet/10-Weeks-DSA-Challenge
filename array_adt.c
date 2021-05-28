#include<stdio.h>
#include<stdlib.h>
struct arr
	{
	int *A;
	int size;
	int count;
	};

void display(struct arr P)
{
	for(int i=0;i<P.count;i++)
	printf("%d\t",P.A[i]);
}

void append(struct arr *append,int n)
{
	if(append->count < append->size)
	append->A[append->count]=n;
	append->count = append->count+1;

}

void insert_arr(struct arr *insert,int index,int x)
{
	if(index>=0 && index<=insert->count)
	{
	for(int i=insert->count;i>index;i--)
	{
	insert->A[i]=insert->A[i-1];
	}
	insert->A[index]=x;
	insert->count++;
	}
}

void delete_arr(struct arr *del,int index)
{
	int x=0;
	if(index>=0 && index<=del->count)
	{
	x = del->A[index];
	for(int i=index;i< del->count;i++)
	del->A[i] = del->A[i+1];
	del->count--;
	}
}

void linear_search(struct arr *linear,int key)
{
	for(int i=0; i< linear->count ;i++)
	{
	if(key==linear->A[i])
	{
	printf("element of %d is at at %d position\n",i,i+1);
	}
	}
}

void binary_search(struct arr *binary,int l,int h,int key)
{
	while(l<=h){
	int mid = (l+h)/2;
	if(key== binary->A[mid]){
	printf("Key found at the index %d and at the  position %d\n",mid,mid+1);
	break;
	}
	else if(key< binary->A[mid])
	h=mid-1;
	else
	l= mid+1;

}
}

void get_by_index(struct arr *p,int index)
{
	if(index>=0 && index< p->count)
	printf("%d is the number\n",p->A[index]);
	else
	printf("The number enterd is not valid\n");
}

void set_by_index(struct arr *p,int index,int num)
{
	if(index>=0 && index< p->count)
	p->A[index]=num;
	else
	printf("The Number Enterd is not valid");
}

void find_max(struct arr *p)
{
	int max=0;
	for(int i=0;i< p->count;i++)
	{
	if(max< p->A[i])
	  max=p->A[i];
	}
	printf("Maximum value in the given arr is %d\n",max);
}

void minimum(struct arr *p)
{
	int min= p->A[0];
	for(int i=0;i< p->count; i++)
	{
	if(min> p->A[i])
	min= p->A[i];
	}
	printf("Minimum value in the given array is %d\n",min);
}

void reverse_arr(struct arr *p)
{
	struct arr B;
	B.size =p->size;
	B.A=(int*)malloc(B.size*sizeof(int));
	B.count= p->count;
	int j=0;
	for(int i=p->count-1,j=0;i!=0;i--,j++)
	{
		B.A[j]=p->A[i];
	}
	for(int i=0; i<= p->count;i++)
	{
		p->A[i]=B.A[i];
	}
}

void reverse_arr_method2(struct arr *ptr)
{
    int i;
   int j;
    for(i=0,j=ptr->count-1;i<j;i++,j--)
    {
        int temp=ptr->A[i];
        ptr->A[i]=ptr->A[j];
        ptr->A[j]=temp;

    }
}
int main()
{
	int num;
	struct arr r;
	printf("Enter the size\n");
	scanf("%d",&r.size);
	r.count=0;
	r.A=(int*)malloc(r.size*sizeof(int));
	printf("Enter the number of elements\n");
	scanf("%d",&num);
	printf("Enter the elements\n");
	for(int i=0; i<num;i++)
	{
		scanf("%d",&r.A[i]);
	}
	r.count=num;
	printf("original array ");
	display(r);
	printf("\n");
	int a=44;
	append(&r,a);
	printf("Elements after appending the function\n");
	display(r);
	/*insert_arr(&r,2,31);
	printf("\nElements after insrting\n");
	display(r);
	delete_arr(&r,3);
	printf("\nElement after deleating one element is \n");
	display(r);
	printf("\nElements after liner search\n");
	linear_search(&r,12);
	printf("\nElements after binary search\n");
	binary_search(&r,0,r.count,12);
	printf("\n\n\n Get by index\n");
	get_by_index(&r,2);
	printf("\n\nResult we get After setting the value at that particular index is \n");
	set_by_index(&r,2,78);
	display(r);
	printf("\n");
	find_max(&r);*/
	printf("\nReveresed arrey is (by method 1)\n");
	reverse_arr(&r);
	display(r);
	printf("\n");
//	minimum(&r);
/*	printf("reversed aray by method 2 \n");
	reverse_arr_method2(&r);
	display(r);
	printf("\n");*/

}








