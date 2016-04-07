#include<stdio.h>
struct node
{
	int info;
	struct node *next;
};
struct node *top;

void push(int ele)
{
	struct node *temp;
	temp=getnode();
	temp->info=ele;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}

struct node *getnode()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Malloc failed\n");
	}
	else
	{
		p->next=NULL;
		return p;
	}
}

int delete()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("Empty stack\n");
		return -1;
	}
	else
	{
		temp=top;
		top=temp->next;
		ele=temp->info;
		freenode(temp);	
		return ele;
	}
}
void display()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("")
