//Distance between two nodes in a binary tree
//function nt yet ready
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *left, *right;
};
typedef struct Node* N;
N tree=NULL;

N getNode(int ele)
{
	N temp=(N)malloc(sizeof(struct Node));
	temp->left=temp->right=NULL;
	temp->data=ele;
	return temp;
}

void ins(int ele)
{
	if(tree==NULL)
		tree=getNode(ele);
	else
	{
		N cur=tree,prev=NULL;
		while(cur!=NULL)
		{
			prev=cur;
			if(cur->data>ele)
				cur=cur->left;
			else
				cur=cur->right;
		}
		if(ele<prev->data)
			prev->left=getNode(ele);
		else
			prev->right=getNode(ele);
	}
	//printf("Element inserted!!!");
}
int dist(N tree,int key1,int key2)
{
	if(tree->data==key1)
	{
		dist(tree->left,-1,key2);
		dist(tree->right,-1,key2);
	}
	else if(tree->data==key2)
	{
		dist(tree->left,key1,-1,distance+1);
		dist(tree->right,key1,-1,distance+1);
	}
	else
	{
		dist(tree->left,key1,key2,distance+1);
		dist(tree->right,key1,key2,distance+1);
	}
	if(key1==key2==-1)
		return distance;
	
}
int main()
{
	int n=0,key1,key2;
	while(n!=-1)
	{
		scanf("%d",&n);
		if(n!=-1)
			ins(n);
	}
	int distance=0;
	scanf("%d %d",&key1,&key2);
	int distance1=dist(tree,key1,key2,distance);
	printf("%d",distance1);
	return 0;
}
