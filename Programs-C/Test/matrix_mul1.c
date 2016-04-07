#include<stdio.h>
#include<math.h>
main()
{
	int i,j,k,a[100][100],b[100][100],c[100][100],r1,r2,c1,c2;
	printf("Enter the number of rows and columns of matrix 1\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the elements of matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%3d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the number of rows and columns of matrix 2\n");
	scanf("%d%d",&r2,&c2);
	printf("Enter the elements of matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%3d",&b[i][j]);
		}
		printf("\n");
	}
	if(c1!=r2)
	{
		printf("Matrix multiplication is not possible\n");
	}
	else if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c2;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	}
	printf("The product of the two matrices is this matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}	
