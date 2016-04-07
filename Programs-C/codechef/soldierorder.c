/*
Input:
2
3
0 1 0
5
0 1 2 0 1

Output:
2 1 3
3 2 1 5 4
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
	long long int t,k,i,j,n;
	scanf("%lld",&t);
	//t=50;
	time_t startTime = time(NULL);
	while(t--)
	{
		scanf("%lld",&n);
		//n=20000;
		long long int a[n],b[n],c[n];
		memset(c,0,sizeof(c));
		/*for(i=0;i<n;i++)
			a[i]=i;*/
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(i=n-1;i>=0;i--)
		{
			if(i==n-1)
			{
				b[i]=i-a[i];
				c[i-a[i]]=1;
			}
			else
			{	k=i;
				while(c[k-a[i]]==1)
					k++;
				c[k-a[i]]=1;
				b[i]=k-a[i];
			}
		}
		for(i=0;i<n;i++)
			printf("%lld ",b[i]+1);
		printf("\n");
	}
	time_t endTime = time(NULL);
	double duration = difftime(endTime, startTime);
	printf("Time spent is %f",duration);
	return 0;
}
			
