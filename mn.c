#include<stdio.h>
int trav(int m,int n,int i,int j)
{
	if(i==m-1 || j==n-1)
		return 1;
	else
		return(trav(m,n,i+1,j)+trav(m,n,i,j+1));
	
}
/*int trav(int m,int n)
{
	if((m==1&&n==2)||(m==2&&n==1)) 
  		return 1;
   	if(m==0||n==0)
   		return 0;
   	else 
   		return(trav(m-1,n)+trav(m,n-1));	
}*/	
		
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int count=trav(m,n,0,0);
	printf("%d\n",count);
	return 0;
}
	
	
