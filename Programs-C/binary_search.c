#include<stdio.h>

main()
{
int n,key,a[30],high,low,mid,i;
printf ("Enter the number of numbers\n");
scanf ("%d",&n);
printf ("Enter the array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the key element to be searched\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
	mid=(low+high)/2;
	if(a[mid]==key)
		{
			printf("search successful\n");
return;
			
		}
	else if(a[mid]>key)
		{
			high=mid-1;
		}
	else
		{
			low=mid+1;
		}
}
printf("unsuccessful search");
}
