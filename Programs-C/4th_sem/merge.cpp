#include<iostream>
using namespace std;
void merge(int a[],int min,int mid,int max)
{
	int i,j,k,l,temp[30];
	i=min;
	j=mid+1;
	for(k=min;i<=mid && j<=max;k++)
	{
		if(a[i]<a[j])
			temp[k]=a[i++];
		else
			temp[k]=a[j++];
	}
	if(i>mid)
	{
		for(l=j;l<=max;l++)
			temp[k++]=a[l];
	}
	else
	{
		for(l=i;l<=mid;l++)
			temp[k++]=a[l];
	}
	for(k=min;k<=max;k++)
		a[k]=temp[k];
}
void part(int a[],int min,int max)
{
	if(min<max)
	{
		int mid=(min+max)/2;
		part(a,min,mid);
		part(a,mid+1,max);
		merge(a,min,mid,max);
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	part(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
	
	
	
