#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[101];
	int a[101],temp;
	long long int t;
	int flag,i,len,lim,j,k,least,pos,j1,lets;
	scanf("%lld",&t);
	while(t--)
	{	
		flag=0;
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++)
		{
			a[i]=(int)(s[i]-'a');
		}
		len=i-1;
		for(i=len;i>0;i--)
		{
			if(a[i]>a[i-1])
			{
				flag=1;
				lets=a[i-1];
				j1=i-1;
				break;
			}
			
		}
		if(flag==1)
		{
			for(j=j1;j<=len;j++)
			{
				least=a[j];
				for(k=j+1;k<=len;k++)
				{
					if(a[k]<least)
					{
						least=a[k];
						pos=k;
					}
				}
				temp=a[j];
				a[j]=a[pos];
				a[pos]=temp;
			}
			for(j=j1;j<=len;j++)
			{
				if(a[j]>lets)
				{
					temp=a[j];
					a[j]=a[j1];
					a[j1]=temp;
					break;
				}
			}
			for(j=j1+1;j<=len;j++)
			{
				least=a[j];
				for(k=j+1;k<=len;k++)
				{
					if(a[k]<least)
					{
						least=a[k];
						pos=k;
					}
				}
				temp=a[j];
				a[j]=a[pos];
				a[pos]=temp;
			}
			for(i=0;i<=len;i++)
				printf("%c",(char)(a[i]+'a'));
			printf("\n");
		}			
		else
			printf("no answer\n");
	}		
	return 0;
}

