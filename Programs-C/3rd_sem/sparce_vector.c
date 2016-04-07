#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info,index;
	struct node* next;
};
typedef struct node* nodeptr;
nodeptr getnode(int ele,int index)
{
	nodeptr temp;
	temp=(nodeptr)malloc(sizeof(struct node));
	temp->info=ele;
	temp->index=index;
	temp->next=temp;
	return temp;
}
nodeptr head;
void insertfront(int ele,int in)
{
	nodeptr temp;
	temp=getnode(ele,in);
	if(head==NULL)
	{
		head=temp;
		return;
	}
	temp->next=head->next;
	head->next=temp;
	head=temp;
	return;
}
void display(int n)
{
	int i;
	nodeptr temp;
	temp=head->next;
	printf("The elements present in the sparce vector are\n");
	for(i=0;i<n;i++)
	{
		if(temp->index==i)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
		else
		{
			printf("0\t");
		}
	}
	printf("\n");
}
int main()
{
	int i,tmp,n;
	head=NULL;
	printf("Enter the number of elements to be present in the sparce vector\n");
	scanf("%d",&n);
	printf("Enter the elements you want in the list\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		if(tmp!=0)
		{
			insertfront(tmp,i);
		}
	}
	display(n);
	return 0;
}
