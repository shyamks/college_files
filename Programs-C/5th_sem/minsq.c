#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int minimum(int n,int m){
    if(n>m)
    	return m;
    else
    	return n;
}
/*int min(int n,int m){
    if(n==m)
        return 1;
    else{
        if(m>n){
		if(n==0)
			return 0;
		else
		    	return (min(n,m%n)+(int)(m/n));
        }
        else{
           	if(m==0)
           		return 0;
           	else
            		return (min(n%m,m)+(int)(n/m));
        }
   }  
}*/
int min(int n,int m){
    if(n==m)
        return 1;
    else{
        if(m>n){
		if(m%2==1 && n%2==1)
		{
			return min()
        }
        else{
           	if(m==0)
           		return 0;
           	else
            		return (min(n%m,m)+(int)(n/m));
        }
   }  
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,m,temp=1000,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        /*if(n%2==1 && m%2==1)
        	temp=minimum(min(n/2,m)+min((n/2)+1,m),min(m/2,n)+min((m/2)+1,n));
        else if(n%2==1)
        	temp=minimum(min(n/2,m)+min((n/2)+1,m),1000);
        else
        {
        	if(m%2==1)
        		temp=minimum(min(m/2,n)+min((m/2)+1,n),1000);
        }*/
        ans=minimum(min(n,m),temp);
        printf("%d\n",ans);
    }
    
    return 0;
}
