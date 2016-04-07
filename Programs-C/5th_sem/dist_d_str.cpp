//Given a string the same characters should be d distance away from each other and print the string
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
void heapsort(int a[],int n,char alpha[])
{
	int i,j,temp;
	char temp1;
	for(i=n-1;i>=0;i--)
	{
		for(j=(i-1)/2;j>=0;j--)
		{
			if(a[j]>a[2*j+2] && (2*j+2)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+2];
				a[2*j+2]=temp;
				temp1=alpha[j];
				alpha[j]=alpha[2*j+2];
				alpha[2*j+2]=temp1;
			}
			if(a[j]>a[2*j+1] && (2*j+1)<=i)
			{
				temp=a[j];
				a[j]=a[2*j+1];
				a[2*j+1]=temp;
				temp1=alpha[j];
				alpha[j]=alpha[2*j+1];
				alpha[2*j+1]=temp1;
			}
		}
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		temp1=alpha[0];
		alpha[0]=alpha[i];
		alpha[i]=temp1;
	}
}
int main()
{
	int d,j,i;
	string s;
	char alpha[26];
	for(i=0;i<26;i++)
		alpha[i]=97+i;
	cin>>s;
	cin>>d;
	int a[26],min=0;
	memset(a,0,sizeof(a));
	int len=s.length();
	char temp[len];
	for(i=0;i<len;i++)
	{
		a[s[i]-'a']++;
		temp[i]='1';
	}
	heapsort(a,26,alpha);
	/*for(i=0;i<26;i++)
		cout<<alpha[i];
	cout<<endl;*/
	int max=a[0];
	int count=0;
	for(i=0;i<26;i++)
	{
		if(a[i]==max)
			count++;
		else
			break;
	}
	if(len<(max-1)*d+count)
		cout<<"Not possible\n";
	else
	{
		j=0;
		for(i=0;i<26;i++)
		{
			j=0;
			while(a[i]!=0)
			{
				if(temp[j]=='1')
				{
					temp[j]=alpha[i];
					j=j+d;
					a[i]--;
				}
				else
					j++;
			}
		}
		cout<<temp<<endl;
	}
	return 0;
}
