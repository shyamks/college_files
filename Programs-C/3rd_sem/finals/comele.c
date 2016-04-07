#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* next;
};
typedef struct node* np;
np getnode(int ele)
{
	np temp;
	temp=(np)malloc(sizeof(struct node));
	temp->info=ele;
	temp->next=NULL;
	return temp;
}
np createlist(np h)
{
	np temp;int ele;
	printf("Enter elements.. -1 for exit\n");
	while(1)
	{
		scanf("%d",&ele);
		if(ele!=-1)
		{
			temp=getnode(ele);
			if(h==NULL)
				h=temp;
			else
			{
				temp->next=h;
				h=temp;
			}
		}
		else
			return h;
	}
}
void display(np h)
{
	np temp;
	temp=h;
	if(temp==NULL)
		printf("No elements\n");
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
	}
}
void comele(np h1,np h2)
{
	np t1,t2;
	t1=h1;t2=h2;
	if(t1==NULL||t2==NULL)
		printf("No common elements\n");
	else
	{
		while(t1!=NULL)
		{
			t2=h2;
			while(t2!=NULL)
			{
				if(t1->info==t2->info)
					printf("%d\n",t1->info);
				t2=t2->next;
			}
			t1=t1->next;
		}
	}
}
int main()
{
	np h1,h2;
	h1=h2=NULL;
	printf("Enter list 1\n");
	h1=createlist(h1);
	printf("Enter list 2\n");
	h2=createlist(h2);
	printf("Common elements are\n");
	comele(h1,h2);
	return 0;
}
