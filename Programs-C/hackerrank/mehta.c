#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int gcd(long long int a,long long int b)
{
  long long int c;
  while ( a != 0 )
  {
     c = a; a = b%a;  b = c;
  }
  return b;
}
long long int ps(long long int i)
{
	long long int ans=sqrt(i);
	if(ans*ans==i)
		return 1;
	else
		return 0;
}
long long int prim(long long int n,long long int count1)
{
	long long int count=0,flag=0,i;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
			flag=ps(i);
			if(flag==1)
				count1++;
		}
	}
	return count;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,t,count,findgcd;
    long long int count1;
    scanf("%lld",&t);
    while(t--)
    {
    	count1=0;count=0;
    	scanf("%lld",&n);
    	count=prim(n,count1);
    	if(count1==0)
    		printf("0\n");
    	else
    	{
    		findgcd=gcd(count,count1);
    		printf("%lld/%lld",count1/findgcd,count/findgcd);
    	}
    }
    return 0;
}

