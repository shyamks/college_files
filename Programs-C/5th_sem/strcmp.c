//compare two strings by making k swaps and returning true or false 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(char s1[],char s2[],int k)
{
	char temp;
	int l1=strlen(s1),l2=strlen(s2);
	int count=0;
	if(l1!=l2)
		return 0;
	else
	{
		int i=0,j=0;
		for(i=0;i<l1;i++)
		{
			if(s1[i]!=s2[i])
			{
				for(j=i+1;j<l2;j++)
				{
					if(s2[j]==s1[i])
					{
						temp=s2[i];
						s2[i]=s2[j];
						s2[j]=temp;
						count++;
						break;
					}
				}
			}
		}
		if(count>=k)
		{
			for(i=0;i<l1;i++)
			{
				if(s1[i]!=s2[i])					
					return 0;
			}
			return 1;
		}
		else
			return 0;
	}
}
				
int main()
{
	char s1[100],s2[100];
	int k;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&k);
	printf("\n\n%d\n",compare(s1,s2,k));
	printf("%s\n",s1);
	printf("%s\n",s2);
	return 0;
}
	
		
