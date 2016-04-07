#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char xorr(char a,char b)
{
	if(a=='0' && b=='0')
		return '0';
	else if(a=='1' && b=='1')
		return '0';
	else if(a=='0' && b=='1')
		return '1';
	else if(a=='1' && b=='0')
		return '1';
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,k,i,j,count;
    scanf("%lld %lld",&n,&k);
    char str[n+k-1],s[n];
    int temp,temp1;
    scanf("%s",str);
    s[n-1]=str[n+k-2];
    for(i=n-2;i>-1;i--)
    {
    	//temp=s[n-1];
    	count=1;
    	s[i]=str[i+k-1];
    	j=i+1;
    	while(count!=k && j<n)
    	{
    		temp=s[i];temp1=s[j];
    		s[i]=xorr(temp,temp1);
    		count++;
    		j++;
    	}
    }
    printf("%s\n",s);
    return 0;
}

