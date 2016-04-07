#include<stdio.h>
main()
{
	char str1[100],str2[100],*s1,*s2;
	printf("Enter the 1st string\n");
	scanf("%s",str1);	
	printf("Enter the 2nd string\n");
	scanf("%s",str2);
	s1=str1;
	s2=str2;
	if(*s1!='\0')
	{
		*s2=*s1;
		s1++;
		s2++;
	}
	*s2='\0';
	printf("The copied string is %s\n",s1);
}
