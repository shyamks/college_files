//the volcano problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void volcano(int a1[20][20],int b1[20][20],int i,int j,int n,int val)
{
	if(b1[i][j]==0 && a1[i][j]<=val && i<n && j<n && i>-1 && j>-1)
	{
		b1[i][j]=1;
		volcano(a1,b1,i+1,j,n,val);
		volcano(a1,b1,i,j+1,n,val);
		volcano(a1,b1,i+1,j+1,n,val);
		volcano(a1,b1,i-1,j,n,val);
		volcano(a1,b1,i,j-1,n,val);
		volcano(a1,b1,i-1,j-1,n,val);
		volcano(a1,b1,i+1,j-1,n,val);
		volcano(a1,b1,i-1,j+1,n,val);
	}
	else 
		return;
}
void chk(int a1[20][20],int b1[20][20],int i,int j,int n,int val)
{
	if(b1[i][j]==1 && i<n && j<n && i>-1 && j>-1)
	{
		chk(a1,b1,i+1,j,n,val);
		chk(a1,b1,i,j+1,n,val);
		chk(a1,b1,i+1,j+1,n,val);
		chk(a1,b1,i-1,j,n,val);
		chk(a1,b1,i,j-1,n,val);
		chk(a1,b1,i-1,j-1,n,val);
		chk(a1,b1,i+1,j-1,n,val);
		chk(a1,b1,i-1,j+1,n,val);
	}
	else if(b1[i][j]==0 && a1[i][j]<=val && i<n && j<n && i>-1 && j>-1)
		volcano(a1,b1,i,j,n,val);
	else
		return;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[20][20],b[20][20],flag=0,i,j,x,y,count=0;
	memset(b,0,sizeof(b));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&x,&y);
	int value=a[x][y];
	while(flag==0)
	{
		chk(a,b,x,y,n,value);
		i=0;
		while(i<n && flag==0)
		{
			if(b[0][i++])
			{
				flag=1;
				break;
			}
		}
		i=0;
		while(i<n && flag==0)
		{
			if(b[n-1][i++])
			{
				flag=1;
				break;
			}
		}
		i=0;
		while(i<n && flag==0)
		{
			if(b[i++][n-1])
			{
				flag=1;
				break;
			}
		}
		i=0;
		while(i<n && flag==0)
		{
			if(b[i++][0])
			{
				flag=1;
				break;
			}
		}
		count=1;value++;			
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
	
