#include<stdio.h>
#include<stdlib.h>
void subset(int k,int d,int a[],int n,int used[])
{
	static int sum=0;int i;
	
	if(k>=n)
		return;
	//count++;
	sum+=a[k];
	used[k]=1;
	if(sum==d)
	{
		//count++;
		for(i=0;i<n;i++)
			if(used[i])
				printf("%d ",a[i]);
		printf("\n");
	}
	if(sum<d)
		subset(k+1,d,a,n,used);
	sum-=a[k];
	used[k]=0;
	subset(k+1,d,a,n,used);

}
	
int main()
{
	int i,n,d;
	scanf("%d",&n);
	int a[n],used[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&d);
	subset(0,d,a,n,used);
	return 0;
}
	
