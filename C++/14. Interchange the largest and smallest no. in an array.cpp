#include<iostream>
using namespace std;

void read_array(int my_arr[],int n);
void display_array(int my_arr[],int n);
void interchange(int arr[],int n);
int find_biggest_pos(int my_arr[10],int n);
int find_smallest_pos(int my_arr[10],int n);

int main()
{
	int arr[10],n;
	cout<<"\nEnter the size of the array: ";
	cin>>n;
	read_array(arr,n);
	interchange(arr,n);
	cout<<"\nThe new array is: ";
	display_array(arr,n);
	return 0;
}

void read_array(int my_arr[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] : ";
		cin>>my_arr[i];
	}
}

void display_array(int my_arr[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\narr["<<i<<"] : "<<my_arr[i];
	}
}

void interchange(int my_array[10],int n)
{
	int temp,big_pos,small_pos;
	big_pos=find_biggest_pos(my_array,n);
    small_pos=find_smallest_pos(my_array,n);	
    temp=my_array[big_pos];
    my_array[big_pos]=my_array[small_pos];
    my_array[small_pos]=temp;
}
int find_biggest_pos(int my_array[10],int n)
{
	int i,large=my_array[0],pos=0;
	for(i=1;i<n;i++)
	{
		if(my_array[i]>large)
		{
			large=my_array[i];
			pos=i;
		}
	}
	return pos;
}

int find_smallest_pos(int my_array[10],int n)
{
	int i,small=my_array[0],pos=0;
	for(i=1;i<n;i++)
	{
		if(my_array[i]<small)
		{
			small=my_array[i];
			pos=i;
		}
	}
	return pos;
}
