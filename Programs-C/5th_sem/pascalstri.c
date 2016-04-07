#include<stdio.h>
#include<stdlib.h>
long int comb(int n,int r)
{
	long int i=n,sum=1;
	if(i==0)
		return sum;
	for(i=n;i>r;i--)
		sum*=i;
	/*for(i=r;i>0;i--)
		sum/=i;*/
	for(i=n-r;i>0;i--)
		sum/=i;
	return sum;
}
int main()
{
	long int n,k,i,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i;k++)
			printf("  ");
		for(j=0;j<=i;j++)
			printf("%ld  ",comb(i,j));
		printf("\n");
	}
	return 0;
}
