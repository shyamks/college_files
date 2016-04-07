//mapping a number in a 2d array

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i,j,a1,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int map[n][n];
	memset(map,0,sizeof(map));
	for(i=0;i<n;i++)
	{
		temp=a[i];
		a1=temp%n;
		temp=temp/n;
		map[temp][a1]++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(map[i][j]>1)
			{
				temp=i*n+j;
				printf("%d ",temp);
			}
		}
	}
	return 0;
}
