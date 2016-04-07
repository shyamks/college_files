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
	int n,i,x;
	scanf("%d %d",&n,&x);
	int a[n+1],sum=0;
	for(i=0;i<n+1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
		sum+=a[i]*power(x,n-i);
	printf("%d",sum);
	return 0;
}
