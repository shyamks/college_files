#include<iostream>
#include<map>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	int t;
	ifstream infile("A-small-practice-1.in");
	infile >> t;
	//cin>>t;
	int n,count=1,i,j,flag,counter=1,k;
	string s1,s2;
	int a[101][101];
	while(t--)
	{
		infile >> n; 
		//cin>>n;
		count=1;
		flag=0;
		memset(a,0,sizeof(a));
		map<string,int> smap;
		for(i=0;i<n;i++)
		{
			infile >> s1 >> s2;
			//cin>>s1>>s2;
			if(smap[s1]==0)
			{
				smap[s1]=count++;
			}
			if(smap[s2]==0)
			{
				smap[s2]=count++;
			}
			a[smap[s1]][smap[s2]]=1;
			a[smap[s2]][smap[s1]]=1;
		}
		for(i=1;i<count;i++){
			for(j=1;j<count;j++){
				if(a[i][j]==1){
					for(k=j+1;k<count;k++){
						if(a[i][k]==1 && a[k][j]==1 ){
							cout<<"Case #"<<counter++<<": No\n";
							flag=1;
							break;
						}
					}
					if(flag==1)
						break;
				}
			
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			cout<<"Case #"<<counter++<<": Yes\n";
			
	}
	return 0;
}
