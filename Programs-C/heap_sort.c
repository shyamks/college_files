#include<stdio.h>
#include<stdlib.h>
void h_sort(int a[],int n)
{
	int i,j,temp;
    for(i=n-1;i>0;i--){
        for(j=(i-1)/2;j>=0;j--){
            if(a[j]>a[(2*j)+2] && (2*j)+2<=i)
            {
			temp=a[j];
			a[j]=a[2*j+2];
			a[2*j+2]=temp;
	    }
            if(a[j]>a[(2*j)+1] && (2*j)+1<=i)
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
}
int main()
{
	int n,i,j,temp;
	printf("Enter the number of numbers to be sorted\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	h_sort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
