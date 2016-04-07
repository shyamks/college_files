#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void rotmat(int a[5][5],int n)
{
	int i,j,count;
	
}
int main()
{
	int i,j,n;
	cin>>n;
	int a[5][5];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	rotmat(a,n);
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
