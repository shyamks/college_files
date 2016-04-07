#include<stdio.h>
main()
{
	int i,j,n,z;
	printf("Enter the numbers within wich u want to print prime nos\n");
	scanf("%d%d",&z,&n);
	if(n==0)
	{
		printf("Invalid number\n");
	}
	for(i=z;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				if(i==j)
				{
					printf("%3d",i);
				}
			break;
			}
		}
	}
	printf("\n");
}
