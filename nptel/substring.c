#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	char pat[100];
	int tab[200],error=-1;
	scanf("%s %s",text,pat);
	int plen,tlen,i,j,flag=0;
	plen=strlen(pat);
	tlen=strlen(text);
	if(plen>tlen)
	{
		printf("%d",error);
		return 0;
	}
	for(i=0;i<tlen;i++)
		tab[(int)text[i]]=plen;
	for(i=0;i<plen-1;i++)
		tab[(int)pat[i]]=plen-1-i;
	/*i=0;
	while(i<tlen && flag!=1)
	{
		
		for(j=plen-1;j>=0;j--)
		{
			if(pat[j]!=text[i+j])
				break;
		}
		if(j==-1)
			{printf("%d",i);flag=1;}
		i+=tab[(int)text[i+plen-1]];
	}
	if(flag==0)
		printf("%d",error);*/
	while(i<tlen)
	{
		
		for(j=0;j<plen;j++)
		{
			if(pat[plen-1-j]!=text[i-j])
				break;
		}
		if(j==plen)
		{
			printf("%d",i+2-plen);
			return 0;
		}
		i+=tab[(int)text[i]];
	}
	printf("-1");
	return 0;
}
