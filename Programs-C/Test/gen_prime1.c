#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Invalid number\n");
	}
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				if(i==j)
				{
					printf("%3d",j);
				}
			break;
			}
		}
	}
	printf("\n");
}
