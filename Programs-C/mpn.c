#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int m)
{
	if(m==0)
		return 1;
	else
		return (m*fact(m-1));
}
int main()
{
	int m,x,y,z,n;
	scanf("%d",&m);
	scanf("%d",&n);
	if(m<n)
		printf("Not possible\n");
	else
	{
		x=fact(m);
		y=fact(m-n);
		z=x/y;
		printf("The answer of %dP%d is %d\n",m,n,z);
	}
	return 0;
}
