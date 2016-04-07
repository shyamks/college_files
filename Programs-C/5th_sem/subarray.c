/*LArgest sub array sum from the start to the end point*/
#include<stdio.h>
#include<stdlib.h>
void sub_array(int a[],int n,int *start,int *end,int *fans)
{
	int sum=0,i,sum1=0,s=0,e=0,count=0,fs=0;
	for(i=0;i<n;i++)
	{
		if(sum1==0)
			s=i;
		sum1+=a[i];
		if(sum1>0)
		{
			if(sum1>sum)
			{
				sum=sum1;
				e=i;
			}
		}
		else
		{
			fs=s;
			sum1=0;
		}
	}
	*fans=sum;
	*start=s;
	*end=e;
}			
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,start=0,end=0,fans=0,count;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sub_array(a,n,&start,&end,&fans);
	printf("\nsum:%d\nstart:%d\nend:%d",fans,start,end);
	return 0;
}
	
