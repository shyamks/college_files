#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
int calc(int a[],int n,int index)
{
	if(index>=n-1)
		return 1;
	else if(a[index]==0)
		return 0;
	else
		return calc(a,n,index+1)+calc(a,n,index+2);
}
		
int main()
{
	int n,nb,i,broken;
	cin>>n;
	cin>>nb;
	int stair[n];
	memset(stair,1,sizeof(stair));
	for(i=0;i<nb;i++)
	{
		cin>>broken;
		stair[broken-1]=0;
	}
	int count=calc(stair,n,0);
	cout<<count<<endl;
	return 0;
}
