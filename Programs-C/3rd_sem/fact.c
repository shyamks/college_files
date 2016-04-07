#include<stdio.h>
/*int fact(int n)
{
	if(n==1 || n==0 || n<0)
	{
		return 1;
	}
	else
	{
		return (n*(fact(n-1)));
	}
}
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("The answer is: %d\n",fact(a));
	return 0;
}*/
int fact(int n)
{
	int i;
	int total=1;
	if(n==1 || n==0 || n<0)
	{
		return 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			total*=i;
		}
	}
	return total;
}	
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("The answer is: %d\n",fact(a));
	return 0;
}

