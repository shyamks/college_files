#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void heapsort(long int a[][2],long int n)
{
	int i,j,temp,temp1;
	for(i=n-1;i>=0;i--)
	{
		for(j=(i-1)/2;j>=0;j--)
		{
			if(a[j][1]>a[2*j+2][1] && (2*j+2)<=i)
			{
				temp=a[j][1];
				a[j][1]=a[2*j+2][1];
				a[2*j+2][1]=temp;
				
				temp1=a[j][0];
				a[j][0]=a[2*j+2][0];
				a[2*j+2][0]=temp1;
			}
			if(a[j][1]>a[2*j+1][1] && (2*j+1)<=i)
			{
				temp=a[j][1];
				a[j][1]=a[2*j+1][1];
				a[2*j+1][1]=temp;
				
				temp1=a[j][0];
				a[j][0]=a[2*j+1][0];
				a[2*j+1][0]=temp1;
			}
		}
		temp=a[0][1];
		a[0][1]=a[i][1];
		a[i][1]=temp;
		
		temp1=a[0][0];
		a[0][0]=a[i][0];
		a[i][0]=temp1;
	}
	
}
int main()
{
	long int n,i;
	scanf("%ld",&n);
	long int a[n][2];
	for(i=0;i<n;i++)
		scanf("%ld %ld",&a[i][0],&a[i][1]);
	heapsort(a,n);
	
	printf("\n");
	for(i=0;i<n;i++)
		printf("%ld %ld\n",a[i][0],a[i][1]);
	maxppl=a[0][1];minppl=a[0][0];
	count=1;
	for(i=1;i<n;i++)
	{
		if(a[i][1]>minppl)
		{
			count++;
			)
		}
	}	
		
	return 0;	
}
