#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
#define SIZE 50
struct msgq
{
	char msg[MAX][SIZE];
	int rear,front;
};
char str[SIZE];
void insertq(struct msgq *q,char *str)
{
	if(q->rear==MAX-1)
	{
		printf("Full que\n");
		return;
	}
	else
	{
		strcpy(q->msg[++(q->rear)],str);
		return;
	}
}
char* delete(struct msgq *q)
{
	if(q->rear<q->front)
	{
		printf("Empty que\n");
		return;
	}
	else
	{
		strcpy(str,q->msg[(q->front)++]);
		return str;
	}
}
void display(struct msgq q)
{
	int i;
	if(q.rear<q.front)
	{
		printf("Empty que\n");
		return;
	}
	else
	{
		for(i=q.front;i<=q.rear;i++)
			printf("%d.%s\n",i+1,q.msg[i]);
		return;
	}
}
int main()
{
	struct msgq q;char str[SIZE];
	q.rear=-1;q.front=0;
	while(1)
	{
		int choice;
		printf("1.enter msg 2.delete msg 3.display msgs\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("Enter msg\n");
				scanf("%s",str);
				//fgets(str,50,stdin);
				insertq(&q,str);
				break;
			case 2: strcpy(str,delete(&q));
				if(strcmp("NULL",str))
				{
					printf("Msg recieved\n%s\n",str);
				}
				break;
			case 3: printf("The msgs are:\n");
				display(q);
				break;
			default: printf("Invalid option\n");
					return 0;
		}
	}
}			
