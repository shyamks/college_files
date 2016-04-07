#include<stdio.h>
int main()
{
	int n,i,j,x,k,temp,flag=0;
	scanf("%d",&n);
	int a[40000];
	if(n>9)
	{
		i=10;
		flag=1;
	}
	else
	{
		i=1;
	}
	x=1;
	while(i!=n+1)
	{
		temp=i;
		while(temp!=0)
		{
			a[x]=temp%10;
			temp=temp/10;
			x++;
		}
		i++;
	}
	if(flag==1)
	{
		j=9;
		for(k=x;k<(x+10);k++)
			a[k]=j--;
	}
	else
		k=x-1;
	for(i=1;i<k-1;i++)
		printf("%d",a[i]);
	return 0;
}

	
