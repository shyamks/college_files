#include<stdio.h>
#include<stdlib.h>
void quick(int a[],int sp,int bp)
{
	int pivot,j,i,temp;
	if(sp<bp)
	{
		j=bp;pivot=i=sp;
		while(i<j)
		{
			while(a[pivot]>=a[i] && i<bp)
				i++;
			while(a[pivot]<a[j])
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=a[i];
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quick(a,sp,j-1);
		quick(a,j+1,bp);
	}
}
/*void quick(int x[],int first,int last)
{
	int pivot,j,temp,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot] && i<last)
				i++;
			while(x[j]>x[pivot])
				j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quick(x,first,j-1);
		quick(x,j+1,last);
	}
}*/
int main()
{
	int n,i;
	printf("The number of elements\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quick(a,0,n-1);
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	return 0;
}

	
