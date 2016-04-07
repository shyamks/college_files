#include<stdio.h>
#include<math.h>
float fact(float a)
{
	float x=1,i;
	for(i=1;i<=a;i++)
		x*=i;
	return x;
}
		
int main()
{
	int t;
	float a,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&a);
			if(a==0)
				printf("0\n");
			else
			{a=a/2;
			ans=fact(a);
			ans=2*ans;
			printf("%g\n",ans);}
	}
	return 0;
}
	
	
