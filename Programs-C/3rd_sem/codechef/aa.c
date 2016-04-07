#include<stdio.h>
#include<stdlib.h>
int main()
{
	int L=0,r,a,b,lead,flag=0,W=0;
	scanf("%d",&r);
	while(r--)
	{
		scanf("%d %d",&a,&b);
		if(a>b)
			{lead=a-b;flag=1;}
		else
	
			{lead=b-a;flag=2;}
		if(L<=lead)
		{
			L=lead;
			W=flag;
		}
	}
	printf("%d %d",W,L);
	return 0;			
}
