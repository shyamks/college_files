#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node* right;
	struct node* left;
};
int i=8;
typedef struct node* np;
np create(int ele)
{
	np h=(np)malloc(sizeof(struct node));
	h->ele=ele;
	h->right=h->left=NULL;
	return h;
}
int pos(int ele,int in[],int low,int high)
{
	int i;
	for(i=low;i<high;i++)
	{
		if(ele==in[i])
		{
			return i;
		}
	}
}
np func(int low,int high,int in[],int post[])
{
	np head;
	if(low==high || i<0 )
		return head;
	if(low>high)
		return NULL;
	else
	{
		head=create(post[i--]);
		int j=pos(head->ele,in,low,high);
		head->right=func(j+1,high,in,post);
		head->left=func(low,j-1,in,post);
	}
}
void display(np p)
{
	if(p==NULL)
		return;
	else
	{
		display(p->left);
		display(p->right);
		printf("%d\t",p->ele);
	}
}
int main()
{
	
	int i,in[10],post[10],n=8;
	//np head;
	for(i=0;i<n;i++)
		scanf("%d",&in[i]);
	for(i=0;i<n;i++)
		scanf("%d",&post[i]);
	np head=func(0,n-1,in,post);
	display(head);
	printf("Tree formed\n");
	return 0;
}
