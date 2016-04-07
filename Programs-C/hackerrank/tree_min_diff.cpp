#include <iostream>
#include <cstring>
#include <stdint.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	int n,start,i,j,sum;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	int mat[n+1][n+1];
	memset(mat,0,sizeof(mat));
	for(i=1;i<=n-1;i++){
		cin>>a>>b;
		mat[a][b]=1;
	}
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=n;j++){
			sum+=a[j][i];
		}
		if(sum==0){
			start=i;
			break;
		}
	}
	
	return 0;
}
