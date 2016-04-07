#include<stdio.h>
#include<stdlib.h>
void count(int k,int n,int arr[],int len,int final[],int i)
{
	if(len==k)
	{
		int j;
		for(j=0;j<k;j++)
			printf("%d ",final[j]);
		printf("\n");
		return;
	}
	
	while(i<n)
	{
		final[len]=arr[i];
		count(k,n,arr,len+1,final,i);
		i++;
	}
}
int main()
{
	int n,k,i;
	scanf("%d %d",&n,&k);
	int arr[n],final[k];
	for(i=0;i<n;i++)
		arr[i]=i+1;
	count(k,n,arr,0,final,0);
	return 0;
}
