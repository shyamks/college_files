#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*void heapsort(long long int a[],long long int n)
{
	long long int i,j,temp;
	for(i=n-1;i>=0;i--)
	{
		for(j=(i-1)/2;j>=0;j--)
		{
			if(a[j]<a[2*j+2] && (2*j+2)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+2];
				a[2*j+2]=temp;
			}
			if(a[j]<a[2*j+1] && (2*j+1)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+1];
				a[2*j+1]=temp;
			}
		}
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
	}
}*/
long long int heapsort(long long int a[],long long int b[],long long int n)
{
	long long int i,j,temp,temp1,final=0,rem;
	for(i=n-1;i>=0;i--)
	{
		for(j=(i-1)/2;j>=0;j--)
		{
			if(a[j]<a[2*j+2] && (2*j+2)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+2];
				a[2*j+2]=temp;
			}
			if(a[j]<a[2*j+1] && (2*j+1)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+1];
				a[2*j+1]=temp;
			}
			if(b[j]<b[2*j+2] && (2*j+2)<=i)
			{
				temp1=b[j];
				b[j]=b[2*j+2];
				b[2*j+2]=temp1;
			}
			if(b[j]<b[2*j+1] && (2*j+1)<=i)
			{
				temp1=b[j];
				b[j]=b[2*j+1];
				b[2*j+1]=temp1;
			}
		}
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		temp1=b[0];
		b[0]=b[i];
		b[i]=temp1;
		rem=abs(a[i]-b[i]);
		if(rem>final)
			final=rem;
	}
	return final;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int t,n,i; 
    scanf("%lld",&t);
    while(t--)
    {
    	scanf("%lld",&n);
    	long long int a[n],b[n],diff=0,temp;
    	for(i=0;i<n;i++)
    		scanf("%lld",&a[i]);
    	for(i=0;i<n;i++)
    		scanf("%lld",&b[i]);
    	//heapsort(a,b,n);
    	//heapsort(b,n);
    	/*for(i=0;i<n;i++)
    	{
    		temp=abs(a[i]-b[i]);
    		if(temp>diff)
    			diff=temp;
    	}*/
    	printf("%lld\n",heapsort(a,b,n));
    }
    return 0;
}

