#include <stdio.h>
void sort(int a[],int p)
{
	int i,j,temp,pos,large;
	for(i=0;i<p-1;i++)
	{
		large=a[i];
		pos=i;
		for(j=i+1;j<p;j++)
		{
			if(large<a[j])
			{
				large=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}
int main()
{
	int t,p,a[102],b[102],i,j,c=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		for(i=0;i<p;i++){scanf("%d",&a[i]);}//printf("\n");
		for(i=0;i<p;i++){scanf("%d",&b[i]);}//printf("\n");
		sort(a,p);
		sort(b,p);
		i=0;
		for(j=0;j<p;j++)
		{
			if(a[j]<=b[i])
			{
				c=c+1;
				i=i+1;
			}
		}
		//for(i=0;i<p;i++){printf("%d\t",a[i]);};printf("\n");
		//for(i=0;i<p;i++){printf("%d\t",b[i]);};printf("\n");
		printf("%d\n",c);
		c=0;
	}	
	return 0;
}
