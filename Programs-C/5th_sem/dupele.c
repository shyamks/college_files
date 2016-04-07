//print duplicate elements in an array O(n)
//lol funny way/wrong way
// try using hash map or bst
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[a[i]+n]>0)
			a[a[i]+n]=(-1)*a[a[i]+n];
		else
		{
			printf("\n%d",a[i]);
			//a[a[i]+n]=-a[a[i]+n];
		}
	}
	return 0;
}
