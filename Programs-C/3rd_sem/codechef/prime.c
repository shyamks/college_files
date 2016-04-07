#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i,z,n,x,mod,t=1,c;
	scanf("%d",&z);
	while(t==1)
	{	
		z++;
		n=z;	
		mod=0;x=0;
		while(n!=0)
		{
			x=n%10;
			n=n/10;
			mod=(mod+x)*10;
		}
		mod=mod/10;
		if(mod==z)
		{
			c=0;
			for(i=2;i<(mod/2);i++)
			{
				if(mod%i==0)
					++c;break;
			}
			if(c==0)
				printf("%d\n",z);t=0;
		}
	}		
	return 0;
}
