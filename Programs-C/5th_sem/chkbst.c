#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *left, *right;
};

int c;
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
int chkbst(N head)
{
	if(head->left==NULL && head->right==NULL)
		return 1;
	else if(head->left==NULL)
	{
		if(head->right->data>head->data)
		{
			chkbst(head->right);
		}
		else
			return 0;
	}
	else if(head->right==NULL)
	{
		if(head->left->data<head->data)
		{
			chkbst(head->left);
		}
		else
			return 0;
	}
	else if((head->left->data<head->data)&&(head->right->data>head->data))
		return(chkbst(head->left) && chkbst(head->right));
	else
		return 0;
}
int main()
{
	int n=0;
	while(n!=-1)
	{
		scanf("%d",&n);
		if(n!=-1)
			ins(n);
	}
	/*N p=tree;
	while(p->left!=NULL)
		p=p->left;
	p->data=100;*/
	int val=chkbst(tree);
	
	if(val==1)
		printf("It is a bst\n");
	else
		printf("It is not a bst\n");
}
