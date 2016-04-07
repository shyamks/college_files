#include<stdio.h>
#include<string.h>
void copy();
void comp();
void concat();
main()
{
	int option;
	printf("Enter the operation u want to perform\n");
	printf("1.copy\n2.compare\n3.concatenate\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:copy();
			 break;
		case 2:comp();
			 break;
		case 3: concat();
			 break;
	}
}
void copy()
{
	char *s1,*s2,str1[100],str2[100];
	s1=str1;
	s2=str2;
	printf("Enter 1st string:\n");
	scanf("%s",str1);
	printf("Enter 2nd string:\n");
	scanf("%s",str2);
	while(*s1!='\0')
	{
		*s2=*s1;
		s1++;
		s2++;
	}
	*s2='\0';
	printf("The copied string is:\n %s",str2);
	
}
void comp()
{
	char *s1,*s2;
	int flag=0;
	char str1[100],str2[100];
	s1=str1;
	s2=str2;
	printf("Enter 1st string:\n");
	scanf("%s",str1);
	printf("Enter 2nd string:\n");
	scanf("%s",str2);
	while((*s1!='\0')||(*s2!='\0'))
	{
		if(*s1!=*s2)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		printf("Strings are same\n");
	else
		printf("Strings are different\n");
}
	
void concat()
{
	char str1[100], str2[100];
	int len1, len2;
	char *s1, *s2;
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the string to be added\n");
	scanf("%s",str2);
	len1=strlen(str1);
	s1=&str1[len1];
	s2=&str2[0];
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
	printf("The concatenated string is as follows : %s\n", str1);
}

