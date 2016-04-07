/*Subsets in a set*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int powers(int a,int b)
{
	int i,c=1;
	for(i=0;i<b;i++)
		c*=a;
	return c;
}
		
int main()
{
	int n,i,x,temp,y,j;
	scanf("%d",&n);
	int b[n];
	memset(b,0, sizeof(b));
	char a[n];
	int z=n-1;
	for(i=0;i<n;i++)
		scanf("%s",&a[i]);
	int p=powers(2,n)-1;
	for(i=1;i<=p;i++)
	{
		
		x=i;
		while(x!=0)
		{
			temp=x%2;
			b[z--]=temp;
			x/=2;
			
		}
		for(j=0;j<n;j++)
		{
			if(b[j]==1)
				printf("%c",a[j]);
		}
		z=n-1;
		printf("\n");
	}
	return 0;
}*/
/*Brackets generation*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int powers(int a,int b)
{
	int i,c=1;
	for(i=0;i<b;i++)
		c*=a;
	return c;
}
		
int main()
{
	int n,i,x,temp,y,j,sum;
	scanf("%d",&n);
	int b[n];
	int z=n-1;
	memset(b,0, sizeof(b));
	int p=powers(2,n)-1;
	//int count=n;
	for(i=1;i<=p;i++)
	{
		sum=0;
		x=i;
		while(x!=0)
		{
			//count--;
			temp=x%2;
			b[z--]=temp;
			x/=2;
			/*if(b[z]==0)
			{
				sum-=1;
				if(sum==-1)
					break;
			}	
			else if(b[z]==1)
				sum+=1;
			z--;*/
			
		}
		for(j=0;j<n;j++)
		{
			if(b[j]==0)
			{
				sum-=1;
				if(sum==-1)
					break;
			}	
			else if(b[j]==1)
				sum+=1;
		}
		if(sum==0)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]==1)
					printf("{ ");
				else
					printf(" }");
			}
			printf("\n");
		}
		z=n-1;
	}
	return 0;
}


	
	
