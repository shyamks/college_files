#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int ans=0;
    long long int t,i,n,j;
    long long int a[100001];
    //long long int map[1000001]={0};
    long long int *map;
    map=(long long int *)malloc(1000001*sizeof(long long int));
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
       	memset(map,0,sizeof(map));
        for(i=0;i<n;i++){
            a[i]=100;;
            map[a[i]]++;
        }
        for(i=0;i<1000001;i++){
            if(map[i]>=2){
                ans+=(map[i]*(map[i]-1));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

