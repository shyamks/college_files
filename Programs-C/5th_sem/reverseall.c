//reverse a singly ll
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node* n;
n getnode(int ele)
{
	n temp;
	temp=(n)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	return temp;
}
n rev(n head)//reversing function
{
	n c=head,p=NULL,m=NULL;
	while(c!=NULL)
	{
		m=c->next;
		c->next=p;
		p=c;
		c=m;
	}
	return p;
}
int main()
{
	n head=NULL,fp=NULL,p=NULL,temp=NULL;
	int n=0;
	while(n!=-1)
	{
		scanf("%d",&n);
		if(n!=-1)
		{
			if(head==NULL)
			{
				head=getnode(n);
				p=head;
			}
			else
			{
				temp=getnode(n);
				if(p->next==NULL)
				{
					p->next=temp;
					p=p->next;
				}
			}
		}
	}
	fp=rev(head);
	while(fp!=NULL)
	{
		printf("%d ",fp->data);
		fp=fp->next;
	}
	return 0;
}
	
	
	
