#include<stdio.h>
#include<stdlib.h>
main()
{
	char str[200];
	char *p,*t;
	printf("Enter the string:\n");
	gets(str);
	for(p=str;*p!='\0';p++)
	{
		for(t=str;p>=t;p--)
		{
			if(*p==*t)
			{
				p--;
				t++;
			}
			else
			{break;}
		}
	}
	if(t>p)
	{printf("pallindrome\n");}
	else
	{printf("not pallindrome\n");}
}
