#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int power(int m,int n)
{
	if(n==0)
		return 1;
	else
		return (m*power(m,n-1));
}
	
int main()
{
	int m,n,x;
	scanf("%d",&m);
	scanf("%d",&n);
	x=power(m,n);
	printf("The answer of %d^%d is %d\n",m,n,x);
	return 0;
}
