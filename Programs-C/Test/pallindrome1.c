#include<stdio.h>
#include<math.h>
main()
{	
	int a,rem,rev=0,temp,i;
	printf("Enter a four digit number\n");
	scanf("%d",&a);
	temp=a;
	if(a>0)
	{
		while(a>0)
		{
			rem=a%10;
			rev=rev*10+rem;
			a=a/10;
		}
		if(temp==rev)
		{
			printf("The number is a pallindrome\n");
		}
		else
		{
			printf("The number is not a pallindrome\n");
		}
	}
	
	else
	{
		printf("Enter a four digit number");
	}
}
