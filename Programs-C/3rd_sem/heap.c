#include<stdio.h>
#define MAX 20

struct que
{
	int front;
	int rear;
	int a[MAX];
};

void addele(struct que* q,int ele)
{
	if(q->rear==MAX-1)
		printf("overflow");
	else
	{
		q->a[++(q->rear)]=ele;
	}
}

int pop(struct que* q)
{
	if(q->front>q->rear)
	{
		printf("underflow\n");
		return -1;
	}
	else
	{
		return(q->a[(q->front)++]);
	}
}

void swap(int* p,int a, int b)
{
	int temp;
	temp=p[a];
	p[a]=p[b];
	p[b]=temp;
	//printf("swapped %d %d\n",p[a],p[b]);
}

void upheap(int* a,int i)
{
	if(i==1)
		return;
	if(a[i/2]>a[i])
	{
		swap(a,i/2,i);
	}
	upheap(a,i/2);
}

void display(struct que *q)
{
	int i;
	if(q->rear<q->front)
		printf("underflow");
	else
	{
		printf("elements are:\t");
		for(i=1;i<=q->rear;i++)
			printf("%d\t",q->a[i]);
		printf("\n");
	}
}

int main()
{
	struct que q;
	q.front=1;
	q.rear=0;
	int a[MAX],n,i,op;
	printf("\t\timplementaion of priority que using binary heap\t\t\n");
	while(1)
	{
		printf("1.insert\t2.delete\t3.display\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1 :printf("enter elements -1 to end\n");
				scanf("%d",&n);
				while(1)
				{	if(n!=-1)
					{
						addele(&q,n);
						upheap(q.a,q.rear);
					}
					else
						break;
					scanf("%d",&n);
				}
				break;
			case 2: //swap(q.a,q.rear,q.front);
				n=pop(&q);
				if(n!=-1)
				{
					printf("poped : :%d\n",n);
					for(i=1;i<=q.rear;i++)
					{
						q.a[i]=q.a[i+1];
						//upheap(q.a,q.rear);
					}
					--q.front;
					--q.rear;
					for(i=1;i<=q.rear;i++)
					{
						//q.a[i]=q.a[i+1];
						upheap(q.a,i);
					}
					//--q.front;
					//--q.rear;
					//upheap(q.a,q.rear);
					//display(&q);
				}
				break;
			case 3: display(&q);break;
			default : return 0;
		}


	}


}
