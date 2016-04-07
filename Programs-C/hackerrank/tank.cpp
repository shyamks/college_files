#include <iostream>
#include<cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
long long int comb(long long int arr[], long long int n, long long int r, long long int index, long long int data[], long long int i,long long int match)
{
    if (index == r)
    {
    	long long int sum=0;
        for (int j=0; j<r; j++)
            sum+=data[j];
        if(sum!=0)
        	if(match%sum==0)
        		return 1;
        else
        	return 0;
    }
    if (i >= n)
        return 0;
    data[index] = arr[i];
    return comb(arr, n, r, index+1, data, i,match)+comb(arr, n, r, index, data, i+1,match);
}
long long int fucc(long long int arr[], long long int n, long long int r,long long int match)
{
    long long int data[r];
    long long int count=comb(arr, n, r, 0, data, 0,match);
    return count;
}
int main()
{
	int count;
	long long int q,b,query,i,limit;
	cin>>b;
	cin>>q;
	long long int buck[b+1];
	for(i=0;i<b;i++)
		cin>>buck[i];
	buck[i]=0;
	sort(buck,buck+sizeof(buck)/sizeof(buck[0]));
	while(q--)
	{
		count=0;
		cin>>query;
		count=fucc(buck,b+1,b+1,query);
		if(count>=1)
			cout<<"yes\n";
		if(count==0)
			cout<<"no\n";
	}
	return 0;
}
