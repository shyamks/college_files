#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#define SIZE 50
struct queue
{
	char msg[MAX][SIZE];
	int rear,front;
};
char temp[SIZE];
void insert(struct queue *q,char *str)
{
	if(((q->rear+1)%MAX)==(q->front))
	{
		printf("queue overflow\n");
		return;
	}
	q->rear=((q->rear)+1)%MAX;
	strcpy(q->msg[q->rear],str);
	printf("message placed in queue\n");
	return;
}
char*delete(struct queue *q)	
{
	if((q->rear)==(q->front))
	{
		printf("queue empty\n");
		return("NULL");
	}
	else
	{
		if((q->front)==(MAX-1))
			q->front=0;
		else
			(q->front)++;	
		strcpy(temp,q->msg[q->front]);
		return temp;
	}
}
void display(struct queue q)
{
	int i,j;
	if(q.rear==q.front)
	{
		printf("queue empty\n");
		return;
	}
	else
	{
		if(q.front>q.rear)
		{
			for(i=0;i<=q.rear;i++)
				printf("%s\t",q.msg[i]);
			for(i=(q.front+1);i<MAX;i++)
				printf("%s\t",q.msg[i]);
		}
		else
		{
			for(i=(q.front+1);i<=q.rear;i++)
				printf("%s\t",q.msg[i]);
		}
	}
}
int main()
{
	int ch;
	char str[SIZE];
	struct queue q1;
	q1.rear=q1.front=MAX-1;
	while(1)
	{
		printf("enter 1 to send msg 2 to receive and 3 to display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter msg\n");
				scanf("%s",str);
				insert(&q1,str);
				break;
			case 2:strcpy(str,delete(&q1));
				if(strcmp(str,"NULL"))
				printf("the message received is %s",str);
                               else
				printf("message not received\n");
				break;
			case 3:printf("the messages in the queue are\n ");
				display(q1);	
				break;
			default:printf("invalid\n");
				return 0;
		}
	}
	return 0;
}

