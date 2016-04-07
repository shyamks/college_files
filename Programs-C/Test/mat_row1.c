#include<stdio.h>
main()
{
	int r,c,a[100][100],i,j,sum_row=0,sum_col=0,z=0;
	printf("Enter the number of rows n colums of d matrix\n");
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
			sum_col+=a[j][i];
		}
		printf("The sum of %d col is %d\n",i+1,sum_col);
		sum_col=0;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum_row+=a[i][j];
		}
		printf("The sum of %d row is %d\n",i+1,sum_row);
		sum_row=0;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				z=z+a[i][j];
			}
		}
	}
		printf("The sum of the diagonal elements of the matrix %d\n",z);
		
}

