#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void rotmat(int a[5][5],int n)
{
	int i,j;
	for(i=0;i<=n/2;i++)
	{
		for(j=0;j<=n/2;j++)
		{
			swap(a[j][i],a[n-1-j][i]);
			swap(a[n-1-j][i],a[n-1-j][n-1-i]);
			swap(a[n-1-j][n-1-i],a[j][n-1-i]);
			swap(a[j][n-1-i],a[j][i]);
		}
	}
}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d ",&a[i][j]);
	rotmat(a,n);
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
