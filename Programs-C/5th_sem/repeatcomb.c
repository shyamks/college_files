#include<stdio.h>
#include<stdlib.h>
int comb(int n,int k)
{
	int pro=1,i;
	for(i=n;i>k;i--)
		pro*=i;
	for(i=k;i>0;i--)
		pro/=i;
	return pro;
}
void repeatcomb(int a[],int n,int k)
{
	int index=0,mod,i,j,count=0,inc=1;
	int ans=comb(n+k-1,k);
	for(i=0;i<ans;i++)
	{
		cn=0;flag=0;
		for(j=0;j<k-count-1;j++)
			printf("%d ",a[cn]);
		if(cn<=inc)
			printf("%d ",a[++cn]);
		for(j=0;j<count;j++)
			printf("%d ",a[inc]);
		count++;
		cn=0;
		if(count==k)
		{
			flag++;
			count=1;
	}
}
				
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	repeatcomb(a,n,k);
	return 0;
}
