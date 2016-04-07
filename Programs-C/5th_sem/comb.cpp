#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
/*int combinationUtil(int arr[], int n, int r, int index, int data[], int i,int match)
{
    if (index == r)
    {
    	int sum=0;
        for (int j=0; j<r; j++)
            sum+=data[j];
        if(sum==match)
        	return 1;
        else
        	return 0;
    }
    if (i >= n)
        return;
    data[index] = arr[i];
    return combinationUtil(arr, n, r, index+1, data, i,match)+combinationUtil(arr, n, r, index, data, i+1,match);
}*/
/*int combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            cout<<data[j]<<" ";
        cout<<endl;
        return 1;
    }
    if (i >= n)
        return 0;
    data[index] = arr[i];
    return combinationUtil(arr, n, r, index+1, data, i)+combinationUtil(arr, n, r, index+1, data, i+1);
    
}*/






/*void combinationUtil(int arr[], int n, int r, int index, int data[], int i,int *count)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            cout<<data[j]<<" ";
        cout<<endl;
        (*count)++;
        return;
    }
    if (i >= n)
        return;
    data[index] = arr[i];	
    combinationUtil(arr,n,r,index+1,data,i,count);
    combinationUtil(arr,n,r,index,data,i+1,count);
}
void printCombination(int arr[], int n, int r)
{
    int data[r],int count=0;
    //cout<<combinationUtil(arr, n, r, 0, data, 0)<<endl;
    combinationUtil(arr, n, r, 0, data, 0,&count);
    cout<<count<<endl;
}

int main()
{
	int n,i,k;
	cin>>n;
	cin>>k;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	printCombination(a,n,k);
	return 0;
}*/

void combinationUtil(int arr[], int n, int r, int index, int data[], int i,int *count)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            cout<<data[j]<<" ";
        cout<<endl;
        (*count)++;
        return;
    }
    if (i >= n)
        return;
    data[index] = arr[i];	
    combinationUtil(arr,n,r,index+1,data,i,count);
    combinationUtil(arr,n,r,index,data,i+1,count);
}
void printCombination(int arr[], int n, int r)
{
    int data[r],int count=0;
    //cout<<combinationUtil(arr, n, r, 0, data, 0)<<endl;
    combinationUtil(arr, n, r, 0, data, 0,&count);
    printf("%d\n",count);
}

int main()
{
	int n,i,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printCombination(a,n,k);
	return 0;
}

