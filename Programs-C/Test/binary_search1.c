#include<stdio.h>
#include<math.h>
main()
{
	int i,key,n,high,mid,low,a[100];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be found\n");
	scanf("%d",&key);
	high=n-1;
	low=0;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(key==a[mid])
		{
			printf("Element is found\n");
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
	printf("Element is not present\n");
}
		
