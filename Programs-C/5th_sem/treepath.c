//Min path between any two numbers a & b in a binary tree

#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){if(a>b) return b;else return a;}
int minpath(int a[],int x,int y,int n)
{
	int in1[n],in2[n],count=0,min=999,i,l=0,k=0,ei,si,j;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			in1[l++]=i;//stores the index of x number occuring multiple times in the array
		else if(a[i]==y)
			in2[k++]=i;//stores the index of y number occuring multiple times in the array
	}
	if(l>0 && k>0)//if there is atleast one pair of x & y
	{
		for(i=0;i<l;i++)//two loops for all combinations of x & y occuring in the array
		{
			for(j=0;j<k;j++)
			{
				si=in1[i];ei=in2[j];
				while(si!=ei)
				{
					if(si>ei)
					{
						si=(si-1)/2;
						count++;
					}
					else
					{
						ei=(ei-1)/2;
						count++;
					}
				}
				if(min>count)
					min=count;
				count=0;
			}
		}
		return min;
	}
	else
		return 0;
}



		
int main()
{
	int a,b,n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d %d",&a,&b);
	int path=minpath(arr,a,b,n);
	if(path==0)
		printf("Numbers a & b are not present in the array\n");
	else
		printf("\nthe min path between %d and %d is %d\n",a,b,path);
	return 0;
}

