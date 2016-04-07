#include<stdio.h>
#include<stdlib.h>
struct node
{
	int r,c,v;
	struct node* prev;
	struct node* nxt;
};
typedef struct node* np;
np head;
np getnode(int ele,int ri,int ci)
{
	np temp=(np)malloc(sizeof(struct node));
	temp->v=ele;
	temp->c=ci;
	temp->r=ri;
	temp->nxt=temp;
	temp->prev=temp;
	return temp;
}
void display(int r,int c)
{
	int i,j;	
	if(head==NULL)
	{
		printf("empty matrix\n");
		return;
	}
	np temp=head;	
	for(i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
			if((temp->r==i)&&(temp->c==j))
			{	
				printf("%d\t",temp->v);
				temp=temp->nxt;	
			}	
			else
				printf("0\t");

		}

		printf("\n");
	}
}
void displ()
{
	np temp;
	if(head==NULL)
		printf("empty list\n");
	else
	{
		temp=head->nxt;
		printf("row\t col\t value\n");
		printf("%d\t %d\t %d\n",head->r,head->c,head->v);
		while(temp!=head)
		{
			printf("%d\t %d\t %d\n",temp->r,temp->c,temp->v);
			temp=temp->nxt;
		}
	}
}
np insert(int ele,int ri,int ci)
{
	np t,temp;	
	if(head==NULL)
		head=getnode(ele,ri,ci);	
	else	
	{	
		temp=getnode(ele,ri,ci);	
		t=head->prev;
		temp->nxt=head;
		t->nxt=temp;
		temp->prev=t;
		head->prev=temp;
	}
}
int main()
{
	head=NULL;	
	int i,j,r,c,ele;
	printf("enter the number of rows and columns\n");
	scanf("%d %d",&r,&c);
	printf("enter the matrix elements\n");	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&ele);
			if(ele!=0)
			insert(ele,i,j);
		}
	}
	displ();
	printf("original\n");	
	display(r,c);
	return 0;
}

