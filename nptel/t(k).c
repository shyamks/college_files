#include<stdio.h>
int tk(int n)
{
	if(n!=0)
		return (tk(n-1)+2*n);
	else
		return 1;
}
int main()
{
	int n,i,ans;
	scanf("%d",&n);
	ans=tk(n);
	printf("%d",ans);
	return 0;
}
	
