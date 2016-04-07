#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int comb(long long int a)
{
	int count=0,flag=0;
	int temp;
	while(a!=0)
	{
		temp=a%2;
		a/=2;
		if(temp==1)
			count++;
	}
	return count;
}
int maxheap(int a,int n)
{
	int i,j=(n-1)/2,temp,max=a[n-1];
	if(a[j]<a[2*j+2])
		max=a[2*j+2];
	else
		max=a[j]
	for(j=(n-1)/2;j>=0;j--)
	{
		if(max<a[2*j+2])
		{
			max=a[2*j+2];
		}
		if(max<a[2*j+1])
		{
			max=a[2*j+1];
		}
	}
	return max;
}
int main()
{
	long long int i,n;
	int odd=0,even=0,sum=0;
	scanf("%lld",&n);
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=comb(a[i]);
	}
	for(i=0;i<n;i++)
		sum+=b[i];
	
	/*if(n%2==0)
		even=1;
	else
		odd=1;
	if(n>1)
	{
		if(odd==1 && sum%2==1)
			printf("shaka :)\n");
		else if(odd==1 && sum%2==0)
			printf("the other player :(\n");
		else if(even==1 && sum%2==0)
			printf("shaka :)\n");
		else
			printf("the other player :(\n");
	}
	else
		printf("shaka :)\n");*/
	return 0;
}
