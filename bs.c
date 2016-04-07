#include<stdio.h>
int search(int a[],int high,int low,int key)
{
	int mid;
	if(low>=high)
		return -1;
	mid=(high+low)/2;
	if(key==a[mid])
		{return mid;}
	if(key<a[mid])
	{
		high=mid-1;
		search(a,high,low,key);
	}
	if(key>a[mid])
	{
		low=mid+1;
		search(a,high,low,key);
	}
}
/*void sort(int a[],int n)
{
	int i,j,temp,pos,great;
	for(i=0;i<n-1;i++)
	{
		great=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(great>a[j])
			{
				great=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}*/
int main()
{
	int n,i,z,high,low,key;
	printf("Enter the number of elemets in the array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to be found in the array\n");
	scanf("%d",&key);
	//sort(a,n);
	high=n;low=0;
	z=search(a,high,low,key);
	if(z==-1)
		printf("element not found\n");
	else
		printf("element found\n");
	return 0;
}
	

