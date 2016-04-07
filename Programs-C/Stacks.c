#include<stdio.h>
# define MAX 50

struct stack
{
	int top;
	int a[MAX];
};

void push(struct stack *s,int ele)
{
	if(s->top==MAX-1)
	{
		printf("Stack full\n");
	}
	else
	{
		s->a[++(s->top)]=ele;
		return;
	}
};

void pop(struct stack *s)
{
	if(s->top==-1)
	{
		printf("Stack empty\n");
	}
	else
	{
		int t;
		t=s->a[(s->top)--];
		return;
	}
};

void display(struct stack s)
{
	int i,x;
	for(i=0;i<=x;i++)
	{
		printf("%d",s.a[i]);
	}
};

void main()
{
	int ele,i,t,a,x=0;
	struct stack s1;
	s1.top=-1;
	printf("Do you want to push or pop ?\n If you want to push press 1,if pop press 2\n");
	scanf("%d",&a);
	while(a==1||a==2)
	{
		if(a==1)
		{
			printf("Enter the number you want to push\n");
			scanf("%d",&ele);
			push(&s1,ele);
			x=x+1;
			display(s1);
		}
		else
		{
			pop(&s1);
			x=x-1;
			display(s1);
		}
		printf("Do you want to push or pop or exit ?\n If you want to push press 1,if pop press 2,to exit press 3\n");
		scanf("%d",&a);
	}
	if(a==3)
	{
		printf("Done with pushing and popping\n");
		printf("The stack is:\n");
		for(i=0;i<x;i++)
		{
			printf("%d",s1.a[i]);
		}
	}
	else
	{
		printf("Wrong digit\n progam will wxit and show you the stack\n");
		for(i=0;i<x;i++)
		{
			printf("%d",s1.a[i]);
		}
	}
}
	
	
	
