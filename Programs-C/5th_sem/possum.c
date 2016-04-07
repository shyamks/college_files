//Max possible ans obtained from using '+','*' and '(' ')' in the array
//example:array->2,1,1,2
//Ans:(2+1)*(1+2)=9
// the efficiency of maxposans function is O((2^n)*n) Try to increase efficiency..
// the efficiency of maxprob function is O(n) sexyyyy
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int powers(int a,int b)
{
	if(b==0)
		return 1;
	else if(b==1)
		return a;
	else if(b%2==0)
		return powers(a,b/2)*powers(a,b/2);
	else
		return powers(a,b/2)*powers(a,b/2)*a;
}
int maxposans(int a[],int n)
{
	int i,k=n-1,p,temp,j,max=0,sum1=1;
	int bin[n],sum[n];
	for(i=0;i<powers(2,n);i++)
	{
		memset(sum,0,sizeof(sum));
		temp=i;k=n-1;
		while(temp!=0)
		{
			p=temp%2;
			temp/=2;
			bin[k--]=p;
		}
		if(k!=-1)
		{
			for(j=0;j<=k;j++)
				bin[j]=0;
		}
		k=0;j=0;sum1=1;
		while(k!=n)
		{
			if(bin[k]==1)
			{
				while(bin[k]==1)
					sum[j]+=a[k++];
				j++;
			}
			else
			{
				while(bin[k]==0)
					sum[j]+=a[k++];
				j++;
			}
		}
		sum1=1;
		for(k=0;k<j;k++)
			sum1*=sum[k];
		if(sum1>max)
			max=sum1;
	}
	return max;
}*/
// More efficient O(n) is the efficiency
int maxprob(int a[],int n)
{
	int sum=1,i,used[n],val,j;
	i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			if(i==0 && i+1<n)
				a[i+1]+=a[i];
			else if(a[i+1]!=1)
			{
				if(a[i-1]==0)
				{
					j=i-1;
					while(a[j]==0)
						j--;
				}
				else
					j=i-1;
				if(a[j]>a[i+1])
					a[i+1]+=a[i];
				else
					a[j]+=a[i];
			}	
			else if(a[i+1]==1 && i+1!=n-1)
			{
				if(a[i-1]!=0)
					a[i-1]+=a[i];
				else
				{
					j=i-1;
					while(a[j]==0)
						j--;
					a[j]+=a[i];
				}
			}
			else if(a[i+1]==1 && i+1==n-1)
				a[i+1]+=a[i];
			a[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			sum*=a[i];
	}
	return sum;
}

int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//int maxi=maxposans(a,n);
	int maxi=maxprob(a,n);
	printf("%d\n",maxi);
	return 0;
}
	
