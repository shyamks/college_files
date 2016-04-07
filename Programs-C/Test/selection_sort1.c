#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,j,pos,temp,a[100];
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i;j<n;j++)
		{
			if(a[j]>a[pos])
			{
				pos=j;
			}
		}

		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	printf("The sorted array is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
