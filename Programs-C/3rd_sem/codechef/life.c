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
	int t,p,a[100],b[100],i,j,c=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		if(p<=30 && p>0)
		{for(i=0;i<p;i++){scanf("%d",&a[i]);}
		for(i=0;i<p;i++){scanf("%d",&b[i]);}
		sort(a,p);
		sort(b,p);
		i=0;
		for(j=0;j<p;j++)
		{
			if((b[i]>=a[j]) && (a[i]>0) && (b[i]>0))
			{
				++c;
				++i;
			}
		}
		printf("%d\n",c);}
	}	
	return 0;
}
