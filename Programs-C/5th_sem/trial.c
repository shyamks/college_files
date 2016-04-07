#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int info;
	struct Node *left, *right;
};

int c;
typedef struct Node* N;
N tree=NULL;

N getNode(int ele)
{
	N temp=(N)malloc(sizeof(struct Node));
	temp->left=temp->right=NULL;
	temp->info=ele;
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
			if(cur->info>ele)
				cur=cur->left;
			else
				cur=cur->right;
		}
		if(ele<prev->info)
			prev->left=getNode(ele);
		else
			prev->right=getNode(ele);
	}
	printf("Element inserted!!!");
}
int main()
{
	int ch,n=0,count=0;
	while(n!=-1)
	{
		printf("Enter the element\n");
		scanf("%d",&n);
		if(n!=-1)
			ins(n);
	}
	N p,temp;
	p=temp=tree;
	if(p->left==NULL)
	{
		p->left=p->right;
		p->right=NULL;
	}
	while(p->left!=NULL || p->right!=NULL)
	{
		while(temp->left!=NULL)
		{	temp=temp->left;count++;printf("%d\n",count);}
		if(p->right!=NULL)
		{
			printf("%d\n",count);
			temp->left=p->right;
			p->right=NULL;
		}
		else
			p=p->left;
		count=0;
	}
	temp=tree;
	while(temp!=NULL)
	{
		printf("%d ",temp->info);
		temp=temp->left;
	}
	return 0;
}
	
 

