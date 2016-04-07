#include<stdio.h>
main()
{
	int a,i;
	printf("Enter a number\n");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("The number %d is not a prime number\n",a);
		
		return;
		}
	}
	printf("The number is prime\n");
}
