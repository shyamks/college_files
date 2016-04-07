#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,sum,tsum;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	sum=0;
	for(i=0;i<n;i++)
		tsum+=a[i][i];
	i=0;j=n-1;
	while(i<n)
		sum+=a[i++][j--];
	if(tsum>sum)
		sum=tsum;
	tsum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			tsum+=a[i][j];
		if(sum<tsum)
			sum=tsum;
		tsum=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			tsum+=a[j][i];
		if(sum<tsum)
			sum=tsum;
		tsum=0;
	}
	printf("%d",sum);
	return 0;
}
			
			
