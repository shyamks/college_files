#include<stdio.h>
void heapsort(int a[],int n)
{
	int i;
	for(i=(n/2);i>=0;i--)
	{
		if(a[i]<a[2i+1])
			swap(a[i],a[2i+1]);
		if(a[i]<a[2i])
			swap(a[i],a[2i]);
	}
	swap(a[0],a[n-1]);
	
int main()
{
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapsort(a,n);
