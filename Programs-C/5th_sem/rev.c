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
static void rev(n *head){
	n current = *head;
	n prev = NULL;
	n next;
	while(current!=NULL){
		next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
	}
	*head = prev;
}



int main()
{
	n ffp=NULL,pp=NULL,head=NULL,fp=NULL,p=NULL,temp=NULL;
	int n=0,k=3,len=0;
	while(n!=-1)
	{
		scanf("%d",&n);
		if(n!=-1)
		{
			if(head==NULL)
			{
				head=getnode(n);
				p=head;
				fp=head;
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
	ffp = head;
	while(fp != NULL){
		printf("%d ",fp->data);
		if(fp->next ==NULL)
			pp = fp;
		fp = fp->next;
		
	}
	rev(&ffp);
	while(ffp!=NULL){
		printf("%d ",ffp->data);
	}
	return 0;
}
