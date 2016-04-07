#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
/*lld gcd ( lld a, lld b )
{
  lld c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}*/
int digits(lld n)
{
	int count=0;
	if(n==0)
		return 1;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	return count;
}
int strange(lld n)
{
	lld i;
	int len=digits(n);
	if(len==1)
		return 1;
	else if(n%len==0)
		return strange(n/len);
	else
		return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    lld t,n,l,r,i,count,j;
    int flag=0;
    cin>>t;
    /*while(t--)
    {
    	cin>>n;
    	lld den=1,num=2,val=1,i,j;
    	int tempd=2,tempn=1;
    	for(i=1;i<=n;i++)
    	{
    		den=1;num=2;
    		for(j=1;j<i;j++)
    		{	
    			den=den+num*2;
	    		val=gcd(den,num);
	    		den=den/val;
	    		num=num/val;
	    		swap(den,num);
	    	}
	    	if(digits(den+num)>digits(num))	
	    		cout<<i<</*" "<<den+num<<"/"<<num<<endl;
    	}
    }*/
    while(t--)
    {
    	count=0;
    	flag=0;
    	cin>>l>>r;
    	j=0;
    	if(l==0)
    	{
    		i=1;
    		count++;
    	}
    	else
    		i=l;
    	while(i<=r)
    	{
    		if(strange(i))
    		{
    			count++;
    			flag=1;
    		}
    		if(flag==0)
    			i++;
    		else if(i>=pow(10,j) && i<pow(10,j+1))
    			i+=j+1;
    		else
    		{
    			j++;
    			i=pow(10,j);
    		}
    		
    	}
    	cout<<count<<endl;
    }
    		
    		
    return 0;
}

