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
int minimum(int n,int m){
    if(n>m)
    	return m;
    else
    	return n;
}
int min(int m,int n)
{
	if(n==m)
		return 1;
	else 
	{
		if(m>n)
		{
			if(m%n==0)
				return m/n;
			else
				
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,m,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        ans=min(n,m);
        printf("%d\n",ans);
    }
    
    return 0;
}
