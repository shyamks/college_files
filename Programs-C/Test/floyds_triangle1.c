#include<stdio.h>
main()
{
	int i,j,r,c=1;
	printf("enter the number of rows");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%3d",c);
			c++;
		}
	printf("\n");
	}
}
