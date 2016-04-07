//reverse k alternate node in a ll
//nt yet completed
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
/*n func(n head,int len,int k)
{
	n p=head,m=NULL,o=NULL;
	int i=1,l=k;
	while(i%k!=0)
	{
		p=p->next;
		i++;
	}
	m=p;
	while(l--){m=m->next;}
	o=rev(head,k);
	o->next=m;
	return head->next->next;
}*/
	
/*n rev(n head,int k)
{
	n p=head,q=p->next;
	k=k-2;
	if(k!=0)
	{
		rev(p->next,k-1);
	}
	else
		q->next=p;
	return p;
}*/
n rev(n head,int len,int k)
{
	n cur=head,prev=NULL,mov=head,temp=NULL;
	int i=k,j=2*k,count=0,flag=0;
	while(j<len)
	{
		i=k;
		while(i!=0)
		{
			mov=cur;
			while(j--)
			{
				mov=mov->next;
				printf("kk%d",j);
			}
			temp=cur->next;
			if(i=k)
			{
				temp=cur->next;
				cur->next=mov;
				prev=cur;
				cur=temp;
				i--;
				//count++;
			}
			else
			{
				temp=cur->next;
				cur->next=prev;
				prev=cur;
				cur=temp;
				i--;
				//count++;
			}
			flag++;
			len-=k;
			if(flag==1)
				head=prev;
		
		}
		j=2*k;
	}
	if(j>=len)
	{
		i=len;
		while(i!=0)
		{
			mov=cur;j--;
			while(j--)
				mov=mov->next;
			temp=cur->next;
			if(i=k)
			{
				temp=cur->next;
				cur->next=mov;
				prev=cur;
				cur=temp;
				i--;
				//count++;
			}
			else
			{
				temp=cur->next;
				cur->next=prev;
				prev=cur;
				cur=temp;
				i--;
				//count++;
			}
		}
	}
	return head;
}	
		
				
		
		
	
int main()
{
	n head=NULL,fp=NULL,p=NULL,temp=NULL;
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
	len=1;
	while(fp!=NULL)
	{
		fp=fp->next;
		len++;
	}
	printf("%d ",len);
	fp=rev(head,len,k);
	while(fp!=NULL)
	{
		fp=fp->next;
		printf("%d ",fp->data);
	}
	return 0;
}
	
