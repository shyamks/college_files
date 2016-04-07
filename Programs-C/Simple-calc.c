#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float a,b,sum,dif,pro,div;
	char op;
	printf("Enter the two numbers\n");
	scanf("%f%f",&a,&b);
	printf("enter the operator\n");
	scanf("op=%c",&op);
	switch(op)
	{
		case '+':sum=a+b;printf("the sum is %f",sum);
			break;
		case '-':dif=a-b;printf("the dif is %f",dif);
			break;
		case '*':pro=a*b;printf("the pro is %f",pro);
			break;
		case '/':if(b==0)
			{
				printf("Division is not possible\n");
				return;
			}
			else
			{
				div=a/b;printf("the div is %f",div);
				break;
			}
		default:printf("plz enter the correct operator");
		break;
	}
}
