#include<stdio.h>
int main()
{
	scanf("%d",&a);
	b=a+1;
	t1=a;
	while(t1!=0)
	{
		temp=t1%10;
		t1=t1/10;
		a[in++]=temp;
	}
	m=in;
	for(i=0;i<=m;i++)
	{
		temp=a[i]*b;
		if(temp/10==0)
		{	
			temp=t1%10;
			t1=t1/10;
			a[in++]=temp;
		}	
			
