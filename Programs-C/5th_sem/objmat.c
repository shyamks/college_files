//creating objects in a matrix (adjacent 1s considered as an object),input is of 0s and 1s 
#include<stdio.h>
#include<stdlib.h>
void chk(int a[10][10],int i,int j,int count)
{
	if(a[i][j]==1)
	{	
		a[i][j]=count;
		chk(a,i+1,j,count);
		chk(a,i-1,j,count);
		chk(a,i,j+1,count);
		chk(a,i,j-1,count);
	}
	else
		return;
}
		
int main()
{
	int n,m,i,j;
	scanf("%d %d",&m,&n);
	int a[10][10],count=2;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				chk(a,i,j,count);
				count++;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=0)
				printf("%d ",a[i][j]-1);
			else
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
