#include<stdio.h>
#include<stdlib.h>
void input(a,n,i);
void sort(i,j,a,n);
void display(n,j,a);
void main()
{
	int i,j,n,key,a[30];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	input();
	sort();
	display();
}
void input(int n,int i)
{
	int a[100];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void sort(int i,int j,int a[30],int n)
{
	int temp,pos;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[pos])
			{
				pos=j;
			}
		}
		temp=a[pos];
		a[pos]=a[i];
		a[i]=temp;
	}
}
void display(int n,int j,int a[30])
{
	printf("The sorted array is:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
}
