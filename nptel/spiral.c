#include<stdio.h>
void spiral(int start,int m,int n,int a[][20],int b,int c)
{
	int i,j;
	static int count=0;
	if(count<b*c)
	{
		i=j=start;
		for(j=start;j<=n;j++)
		{
			if(count<b*c)
			{
				printf("%d",a[i][j]);
				count++;
				if(count<b*c)
					printf(" ");
			}
		}
		j--;
		for(i=start+1;i<=m;i++)
		{
			if(count<b*c)
			{
				printf("%d",a[i][j]);
				count++;
				if(count<b*c)
					printf(" ");
			}
		}
		i--;
		for(j=n-1;j>=start;j--)
		{
			if(count<b*c)
			{
				printf("%d",a[i][j]);
				count++;
				if(count<b*c)
					printf(" ");
			}
		}
		j++;
		for(i=m-1;i>start;i--)
		{
			if(count<b*c)
			{
				printf("%d",a[i][j]);
				count++;
				if(count<b*c)
					printf(" ");
			}
		}
		i++;
		spiral(start+1,m-1,n-1,a,b,c);
	}
	else
		return;
}
int main()
{
	int a[20][20],i,j,n,m;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	spiral(0,m-1,n-1,a,m,n);
	return 0;
}
