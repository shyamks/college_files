#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int num,num1,rev,rem;
	printf("Enter a four digit number\n");
	scanf("%d",&num);
	if(num>9999||num<1000)
	{
		printf("Please enter a four digit number\n");
		return;
	}
	num1=num;
	rev=0;
	while(num1>0)
	{	
		rem=num1%10;
		rev=rev*10+rem;
		num1=num1/10;
	}
	if(rev==num)
	{
		printf("The reverse of %d is %d and it is a pallindrome\n",num,rev);
	}
	else
	{
		printf("The reverse of %d is %d and it is not a pallindrome\n",num,rev);
	}
}
