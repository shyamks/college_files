#include<stdio.h>
int stock(int a[],int m,int n,int pro)
{
	if(m<n)
	{
		int i,pos;
		int max=0,buy=0,count;
		for(i=m;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				pos=i;
			}
		}
		for(i=m;i<pos;i++)
			buy+=a[i];
		count=pos-m;
		pro=(max*count)-buy+stock(a,pos+1,n,pro);
	}
	else
		return pro;
	
}
		
int main()
{
	int n,prof=0,ans=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ans=stock(a,0,n,prof);
	printf("%d\n",ans);
	return 0;
}
	
