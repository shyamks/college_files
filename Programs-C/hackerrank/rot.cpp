#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int m,n,r,rot,tr,x,y,i,count=1,j,tn,tm,ele,cx,cy;
    cin>>n>>m>>r;
    tn=n;tm=m;
    long long int a[301][301];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
        	a[i][j]=count++;}
    }
    while(n>0 && m>0)
    {
    		ele=(n*m)-((n-2)*(m-2));
    		//ele=m+2*(n-1)+m-2;
		rot=r%ele;
		cx=x,cy=y;
		while(rot!=0)
		{
			if(n==1 && m==1){}
			else if(n==1)
			{
				while(cy<y+m-1)
				{
					swap(a[cx][cy],a[cx][cy+1]);
					cy++;
				}
			}
			else if(m==1)
			{
				while(cx<x+n-1)
				{
					swap(a[cx][cy],a[cx+1][cy]);
					cx++;
				}	
			}
			else
			{
				while(cy<y+m-1)
				{
					swap(a[cx][cy],a[cx][cy+1]);
					cy++;
				}
		
				while(cx<x+n-1)
				{
					swap(a[cx][cy],a[cx+1][cy]);
					cx++;
				}
				while(cy>y)
				{
					swap(a[cx][cy],a[cx][cy-1]);
					cy--;
				}
				while(cx>x+1)
				{
					swap(a[cx][cy],a[cx-1][cy]);
					cx--;
				}
			}
			cx=x;cy=y;
			rot--;
			
		}
		n=n-2;m=m-2;x++;y++;
		
    }
    cout<<endl;
    for(i=0;i<tn;i++)
    {
        for(j=0;j<tm;j++)
        	cout<<a[i][j]<<" ";
        cout<<endl;
    }
   
    return 0;
}

