#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	bool TRUE,FALSE;
	int n,i,k,j;
	scanf("%d",&n);
	int a[n];
	for(i=2;i<=n+2;i++)
		a[i-2]=i;
	for(i=2;i<=n+2;i++)
	{	a[i-2]=TRUE;k=0;
		for(j=(i*i)+(k*i);i<=n;k++,i++)
			a[j-2]=FALSE;}
	for(i=0;i<n;i++)
	{
		if(a[i]==TRUE)
			printf("%d\n",a[i]);
	}
return 0;
}
		
