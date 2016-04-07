#include<stdio.h>
main()
{
	int r,c,a[100][100],i,j;
	float sum_all;
	printf("Enter the rows n colums of d matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum_all+=a[i][j];
		}
	}
	printf("The sum of all elements is %f",sum_all);
	
}
