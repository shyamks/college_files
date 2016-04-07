#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a[26];
	memset(a,0,sizeof(a));
	char s[1000],s2[1000];
	int i,count=0;
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{	
		count=0;		
		scanf("%s",s2);		
		scanf("%s",s);
		for(i=0;s2[i]!='\0';i++)
			a[(int)(s2[i])-'a']++;
		for(i=0;s[i]!='\0';i++)
		{	
			if(a[(int)(s[i])-'a']>0)
			{
				count++;
				a[(int)(s[i])-'a']--;
			}
		}	
		printf("%d\n",count);
	}		
	return 0;
}

