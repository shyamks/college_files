//Double and triple pointers to an array
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ***ster(int *a)
{
	int b[10][10],i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			b[i][j]=2;
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d ",*((a+i*10)+j));
		}
		printf("\n");
	}
	int ***c=(int ***)malloc(sizeof(int **) *10);
	for(j=0;j<10;j++)
	{
		c[j]=(int **)malloc(sizeof(int *)*10);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			c[i][j]=(int *)malloc(sizeof(int)*10);
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
				c[i][j][k]=3;
		}
	}
	int ***d=c;
	return d;
}
int main()
{
	int n,k;
	scanf("%d",&n);
	int a[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			a[i][j]=1;
		}
	}
	a[3][4]=3;
	int ***b=ster((int *)a);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{	
			for(k=0;k<10;k++)
				printf("%d ",b[i][j][k]);
			
		}
		printf("\n");
	}
	return 0;
}
	
