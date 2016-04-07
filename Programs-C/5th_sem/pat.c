//Generating a pattern
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[5]={'a','b','c','d','e'};
	int i,j,k;
	for(i=4;i>=0;i--)
	{
		for(j=0;j<((i*2)+1);j++)
		{
			if(i==0)
				printf("%c ",a[j]);
			else if((j-1)/i==1)
				printf("%c ",a[2*i-j]);
			else
				printf("%c ",a[j]);
		}
		printf("\n");
		if (i!=0)
			for(k=4;k>=i;k--)
				printf("  ");
	}
	return 0;
}
			
