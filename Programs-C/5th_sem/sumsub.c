//max sum in an array where the adjacent elements are not considered in the sum

#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int maxsum(int a[],int n,int i)
{
	if(i>=n)
		return 0;
	else
	{
		if(a[i]<=0)
			return(max(maxsum(a,n,i+1),maxsum(a,n,i+2)));
		else
			return(max(a[i]+maxsum(a,n,i+2),a[i]+maxsum(a,n,i+3)));
	}
}
int main()
{
	int i,n,mxsum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mxsum=max(maxsum(a,n,0),maxsum(a,n,1));
	printf("%d",mxsum);
	return 0;
}
	
