#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float sum,vsum,variance,sd,mean;
	int i,n,a[100];
	sum=0;
	vsum=0;
	printf("Enter the number of values u want:\n");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		mean=sum/n;
		vsum=vsum+(a[i]-mean)*(a[i]-mean);
		variance=vsum/(n);
		sd=sqrt(variance);
	}
	printf("The mean is %f\nThe variance is %f\nThe std deviation is %f\n",mean,variance,sd);
}
