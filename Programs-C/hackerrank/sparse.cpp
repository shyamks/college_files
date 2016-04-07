#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#define ld long long int
using namespace std;
int main()
{
	int n=10,i,j;
	int a[n];
	int logTable[n];
	memset(logTable,0,sizeof(logTable));
	for(i=0;i<n;i++)
		a[i]=i+1;
	for (int i = 2; i <= n-1; i++)
      		logTable[i] = logTable[i >> 1] + 1;
      	/*for(int i=1;i<=9;i++)
      		cout<<logTable[i]<< " ";*/
      	int rmq[logTable[n-1]+1][10];
      	memset(rmq,0,sizeof(rmq));
      	for(i=0;i<n;i++)
      		rmq[0][i]=i;
      	for (int k = 1; (1 << k) < n; ++k) {
	      for (int i = 0; i + (1 << k) <= n; i++) {
		int x = rmq[k - 1][i];
		int y = rmq[k - 1][i + (1 << k - 1)];
		//()
		rmq[k][i] = ((a[x] <= a[y]) ? x : y);
	      }
	    }
	for(i=0;i<logTable[n-1]+1;i++){
		for(j=0;j<n;j++)
			cout<<rmq[i][j]<<" ";
		cout<<endl;
	}
      	
      	return 0;
}
