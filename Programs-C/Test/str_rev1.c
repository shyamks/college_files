#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char str[100],rev[100];
	int k,i,j;
	printf("Enter a string:\n");
	scanf("%s",str);
	k=strlen(str);
	i=-1,j=-1;
	while(str[++i]!='\0')
	{
		while(k>=0)
		{
			rev[j++]=str[k--];
			
		}
		
	}
	rev[j]='\0';
	printf("The reversed string is:\n");
	printf("%s\n",rev);
}
	
