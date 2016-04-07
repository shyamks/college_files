#include<stdio.h>
#include<stdlib.h>
void input(i,a,n);
void search(n,i,key,a);
void main()
{
	int n,i,key,a[50];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("The array elements are:\n");
	input(i,a,n);
	printf("Enter the key element\n");
	scanf("%d",&key);
	search(n,i,key,a);
}
void input(int i,int a[20],int n)
{
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
}
void search(int n,int i,int key,int a[20])
{
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
		{
		printf("The element %d is found at location %d\n",key,i+1);
		return;
		}
	else
		{
		printf("Element is not found\n");
		return;
		}
	}
}
