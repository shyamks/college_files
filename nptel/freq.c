#include<stdio.h>

int main()
{
	int i,n;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int j,count,high,freq;
	high=freq=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(count>freq)
		{
			high=a[i];
			freq=count;
		}	
	}	

	printf("%d",high);	

   return 0;
}
