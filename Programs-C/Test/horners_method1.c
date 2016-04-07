#include<stdio.h>
main()
{
	int n,i;
	float a[100],sum=0,x;
	printf("Enter the degree of the polynomial:\n");
	scanf("%d",&n);
	printf("Enter the coefficients\n");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter the value of x\n");
	scanf("%f",&x);
	for(i=n;i>0;i--)
	{
		sum=(sum+a[i])*x;
	}
	sum=sum+a[0];
	printf("The value of the polynomial is %f\n",sum);
}
