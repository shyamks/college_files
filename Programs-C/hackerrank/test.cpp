#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,m,i,k,j;
    	cin>>n;
    	cin>>m;
    	long long int mou[n],need[m],val,min=9999999999999,max=0;
    	for(i=0;i<n;i++)
    		cin>>mou[i];
    	for(i=0;i<m;i++)
    		cin>>need[i];
    	long long int n1=(sizeof(mou)/sizeof(mou[0]));
    	long long int m1=(sizeof(need)/sizeof(need[0]));
    	sort(mou,mou+n1);
    	sort(need,need+m1);
    	k=0;
    	i=0;
    	while(i<n)
    	{
    		if(mou[i]>=need[k])
    		{
    			val=mou[i]-need[k++];
    			if(val<min)
    				min=val;
    		}
    		else
    		{
    			if(abs(mou[i+1]-need[k])>min)
    				val=abs(mou[i]-need[k++]);
    			else
    			{
    				if(min>max)
    					max=min;
    				i++;
    			}
    		}
    	}	
    	cout<<max<<endl;
    }
    return 0;
}

