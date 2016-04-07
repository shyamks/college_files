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
	int m,x;
	scanf("%d",&m);
	x=fact(m);
	printf("The answer of %d! is %d\n",m,x);
	return 0;
}
