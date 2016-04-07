#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lld;
struct Node
{
	lld info;
	bool flag;
	struct Node *left, *right;
};
typedef struct Node* N;
//N tree=NULL;
N getNode(lld ele)
{
	N temp=(N)malloc(sizeof(struct Node));
	temp->left=temp->right=NULL;
	temp->info=ele;
	temp->flag=true;
	return temp;
}
lld count(N p)
{
	if(p==NULL || p->flag==false)
		return 0;
	else
		return p->info+count(p->left)+count(p->right);
}
void hsort(lld a[100001][2],lld n)
{
	lld i,j,temp;
	for(i=n-1;i>=0;i--)
	{
		for(j=(i-1)/2;j>=0;j--)
		{
			if(a[j][0]<a[2*j+2][0] && (2*j+2)<=i)
			{
				swap(a[j][0],a[2*j+2][0]);
				swap(a[j][1],a[2*j+2][1]);
			}
			if(a[j][0]<a[2*j+1][0] && (2*j+1)<=i)
			{
				swap(a[j][0],a[2*j+1][0]);
				swap(a[j][1],a[2*j+1][1]);
			}
			if(a[j][0]==a[2*j+2][0] && (2*j+2)<=i)
			{
				if(a[j][1]<a[2*j+2][1])
				{
					swap(a[j][0],a[2*j+2][0]);
					swap(a[j][1],a[2*j+2][1]);
				}
			}
			if(a[j][0]==a[2*j+1][0] && (2*j+1)<=i)
			{
				if(a[j][1]<a[2*j+1][1])
				{
					swap(a[j][0],a[2*j+1][0]);
					swap(a[j][1],a[2*j+1][1]);
				}
			}
		}
		swap(a[0][0],a[i][0]);
		swap(a[0][1],a[i][1]);
	}
	//return 0;
}
void display(N p)
{
	if(p==NULL)
		return;
	else
	{	
		display(p->left);
		p->flag=false;
		display(p->right);
	}
}
int main()
{
	lld n,k,i,temp,from,to;
	cin>>n>>k;
	lld a[100001][2];
	N tp[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i][0];
		a[i][1]=i;
		tp[i]=getNode(a[i][0]);
	}
	for(i=0;i<n-1;i++)
	{
		cin>>from>>to;
		if(to<from)
			swap(to,from);
		if(tp[from-1]->right==NULL)
			tp[from-1]->right=tp[to-1];
		else
			tp[from-1]->left=tp[to-1];
	}
	N head=tp[0];
	for(i=0;i<n;i++)
	{
		a[i][0]=count(tp[i]);
		a[i][1]=i;
	}
	hsort(a,n);
	for(i=0;i<n;i++)
	{
		if(k==0)
			break;
		if(a[i][0]<0 && tp[a[i][1]]->flag==true && count(tp[a[i][1]])<0)
		{
			display(tp[a[i][1]]);
			k--;
		}
		if(a[i][0]>0)
			break;
	}
	lld finale=count(head);
	cout<<finale<<endl;
	return 0;
}
			
	
	
	
