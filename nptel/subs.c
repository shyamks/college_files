#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],pat[20];
	scanf("%s %s",text,pat);
	int i,j,plen,tlen,error=-1;
	plen=strlen(pat);
	tlen=strlen(text);
	if(plen>tlen)
	{
		printf("%d",error);
		return 0;
	}
	i=0;
	while((i+plen-1	)<tlen)
	{
		int tp=i;int count=0;
		for(j=0;j<(plen);j++)
		{
			if(pat[j]==text[tp])
			{
				tp++;
				count++;
			}
			else
				break;
		}
		if(count==plen)
		{
			printf("%d",i);
			return 0;
		}
			
		i++;
	}
	printf("%d",error);
	return 0;
}
