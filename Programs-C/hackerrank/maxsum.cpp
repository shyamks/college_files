//Maximise the sum of the subarrays mod m


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ld long long int
using namespace std;
struct node{
    ld data[2];
    struct node *left;
    struct node *right;
};
typedef struct node* np;

void subtree(np p,ld &max,np comp,ld m){
    if(p==NULL)
        return;
    else{
        subtree(p->left,max,comp,m);
        if(p->data[1]<comp->data[1]){
            if(max<comp->data[0]-p->data[0]){
                max=(comp->data[0]-p->data[0])+m;
            }
                
        }       
        subtree(p->right,max,comp,m);
    }
}

void calc(np p,ld &max,ld m){
    if(p==NULL)
        return;
    else{
        calc(p->left,max,m);
        np temp=p->right;
        subtree(temp,max,p,m);
        calc(p->right,max,m);
    }
}

np getNode(ld ele,ld pos)
{
	np temp=(np)malloc(sizeof(struct node));
	temp->left=temp->right=NULL;
	temp->data[0]=ele;
    temp->data[1]=pos;
	return temp;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ld t,i,n,m,max=0;
    np tree=NULL,cur=NULL,prev=NULL;
    cin>>t;
    while(t--){
        tree=NULL,cur=NULL,prev=NULL;
        max=0;
        cin>>n,m;
        ld a[n],s[n][2];
        for(i=0;i<n;i++){
            cin>>a[i];
            a[i]%=m;
        }
        s[0][0]=a[0];
        s[0][1]=0;
        for(i=1;i<n;i++){
            s[i][0]+=s[i-1][0]%m;
            if(s[i][0]>max)
                max=s[i][0];
            s[i][1]=i;
        }
        for(i=0;i<n;i++){
            if(tree==NULL)
                tree=getNode(s[i][0],i);
            else
            {
                cur=tree,prev=NULL;
                while(cur!=NULL)
                {
                    prev=cur;
                    if(cur->data[0]>s[i][0])
                        cur=cur->left;
                    else
                        cur=cur->right;
                }
                if(s[i][0]<prev->data[0])
                    prev->left=getNode(s[i][0],i);
                else
                    prev->right=getNode(s[i][0],i);
            }            
        }
        calc(tree,max,m);
        cout<<max<<endl;
    }
    return 0;
}

