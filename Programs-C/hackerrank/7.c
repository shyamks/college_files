//The number of combinations a tower can be constructed of height sum using the elements in the array(repeatative is ok)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long int lld;
int rec(lld a[],lld i,lld n,lld tot,lld sum1)
{
	
	if(i<n && i>=0)
	{
		if(tot<sum1)
			return 0;
		else if(tot==sum1)
			return 1;
		else
		{
			return(rec(a,i+1,n,tot,sum1+a[i])+rec(a,i,n,tot,sum1+a[i])+rec(a,i+1,n,tot,sum1));
		}
	}
	else
		return 0;
}

int main()
{
	lld sum,k,i,sum1=0;
	scanf("%lld",&sum);
	scanf("%lld",&k);
	lld a[k];
	for(i=0;i<k;i++)
		scanf("%lld",&a[i]);
	int count=rec(a,0,k,sum,sum1);
	printf("%d\n",count);
	return 0;
}
