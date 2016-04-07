#include<stdio.h>
#include<stdlib.h>
int power(int x, int y)
{
	int result = x;
	int i;
	if(y == 0) return 1;
	if(x < 0 || y < 0) return 0;

	for( i = 1; i < y; ++i)
		result *= x;

	return result;
}
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	while(i!=n-1)
	{
		for(j=i+1;j<n;j++)
		{
			if((power(a[i],a[j])>(power(a[j],a[i]))))
				count++;
		}
		i++;
	}
	printf("%d",count);
	return 0;
}
