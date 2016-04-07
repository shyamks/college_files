#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[20][20],b[20][20],flag=0,i,j,x,y,count=0;
	memset(b,0,sizeof(b));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&x,&y);
	int value=a[x][y];
