#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp,pos,great;
	printf("Enter the number elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		great=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(great<a[j])
			{
				great=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	printf("The sorted elements in the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
