#include<stdio.h>
#include<stdlib.h>
main()
{
int n,a[100],i,j,temp;
printf("Enter the number of numbers to be sorted\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{	
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
}
printf("The sorted elements are\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
} 
