#include<stdio.h>
#include<stdlib.h>
void heapsort(int a[],int n)
{
	int i,j,temp;
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
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapsort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

	
