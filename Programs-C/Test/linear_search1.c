#include<stdio.h>
void input(i,n,a);
void search(n,i,key,a);
void main()
{
	int n,i,a[100],key;
	printf("Enter the sze of the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	input(i,n,a);
	printf("Enter the key element\n");
	scanf("%d",&key);
	search(n,i,key,a);
}
void input(int i,int n,int a[100])
{
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void search(int n,int i,int key,int a[100])
{
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Element is found at location %d\n",i+1);
			return;
		}
		else
		{
			printf("element is not found\n");
		}
	}
}
