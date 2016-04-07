#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*void func(int a[2][10],int n,int i,int j)
{
	if(i<n && j <2)
	{
		if(a[i][j]==0)
		{
			*/
		
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    	//long long int n1,n2,var;
    	int t,i,j,n,flag,temp;
    	char n1[2][20];    
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		j=n;
		scanf("%s %s",n1[0],n1[1]);
		int a[2][10];
		for(i=0;i<2;i++)
		{
			for(j=0;j<n;j++)
			{
				if(n1[i][j]=='1')
					a[i][j]=1;
				else
					a[i][j]=0;
			}
		}
		for(i=0;i<n-1;i++)
		{
			
			if(a[1][i]==0)
			{
				if(a[0][i]==0)
				{
					/*if(a[0][i-1]==0 && i>0)
					{
						a[0][i-1]=1;
						a[0][i]=1;
						i--;
					}
					else
					{*/
					a[0][i]=1;
					a[1][i]=1;
					//}
				}
				else if(a[0][i+1]==0)
				{
					a[0][i+1]=1;
					a[1][i]=1;
				}
				else if(a[1][i+1]==0)
				{
					a[1][i+1]=1;
					a[1][i]=1;
				}
			}
			else
			{
				if(a[0][i]==0)
				{
					if(a[0][i+1]==0)
					{
						a[0][i]=1;
						a[0][i+1]=1;
					}
				}
			}
		}
		i=n-1;
		if(a[1][i]==0)
		{
			if(a[0][i]==0)
			{
				a[0][i]=1;
				a[1][i]=1;
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(a[0][i]==0 && a[0][i+1]==0)
			{
				a[0][i]=1;
				a[0][i+1]=1;
			}
		}
		/*for(i=0;i<2;i++)
		{	
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}*/
		flag=0;
		for(i=0;i<2;i++)
		{	
			for(j=0;j<n;j++)
			{
				if(a[i][j]==0)
				{
					flag=1;
					printf("NO\n");
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			printf("YES\n");
			
	}
		
    return 0;
}

