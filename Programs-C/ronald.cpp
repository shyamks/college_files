#include <iostream>
#include<cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){
	return (a>b);
}
int main()
{
	
	int n,i,count=0,j,flag=0;
	cin>>n;
	string a[n];
	string b[n];
	int c[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int sz=sizeof(a)/sizeof(a[0]);
	sort(a,a+sz,cmp);
	for(i=1;i<n;i++)
	{
		if(a[i].compare(a[i-1])==0)
			count++;
		else
		{
			if(count>0)
			{
				flag=1;
				cout<<a[i-1]<<" "<<count+1<<endl;
				count=0;
			}
			
		}	
	}
	if(count>0)
	{
		flag=1;
		cout<<a[i-1]<<" "<<count+1<<endl;
		count=0;
	}
	if(flag==0)
		cout<<"NONE\n";
	return 0;
}
