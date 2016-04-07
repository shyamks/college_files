#include<stdio.h>
#define MAX 50
struct stack
{
	int a[MAX];
	int top;
};
void push(struct stack *s,int ele)
{
	if(s->top==MAX-1)
	{
		printf("Stack is full\n");
		return;
	}
	else
	{
		s->a[++(s->top)]=ele;
		return;
	}
}
int pop(struct stack *s)
{
	int ele;
	if(s->top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	else
	{
		ele=s->a[(s->top)--];
		return ele;
	}
}
void display(struct stack s)
{
	int i;
	if(s.top==-1)
	{
		printf("Stack has no elements\n");
		return;
	}
	else
	{
		printf("\n");
		for(i=s.top;i>=0;i--)
		{
			printf("%d\n",s.a[i]);
		}
		return;
	}
}
void top_n(struct stack s,int n)
{
	int temp,ele;
	if(s.top<(n-1))
	{
		printf("The number of elemnets in the stack is less than %d\n",n);
		return;
	}
	else
	{
		temp=s.top;
		ele=s.a[temp-n+1];
		printf("The element is %d\n",ele);
		return;
	}
}
void bottom_n(struct stack s,int n)
{
	struct stack temp1;int temp,i,ele;
	temp1.top=-1;
	for(i=s.top;i>=0;i--)
	{
		temp1.a[++(temp1.top)]=s.a[i];
	}
	if(temp1.top<(n-1))
	{
		printf("The number of elemnets in the stack is less than %d\n",n);
		return;
	}
	else
	{
		temp=temp1.top;
		ele=temp1.a[temp-n+1];
		printf("The element is %d\n",ele);
		return;
	}
}
	
int main()
{
	struct stack s1;
	s1.top=-1;
	int cho,ele,n;
	while(1)
	{
		printf("Enter the operation you want to do 1)Push 2)Pop 3)Display 4)top ele 5)bottom ele\n");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:printf("Enter the element you want to push\n");
				scanf("%d",&ele);
				push(&s1,ele);
				printf("\n");
				display(s1);
				break;
			case 2:ele=pop(&s1);
				printf("The element %d has been removed from the position %d(from bottom) from the stack\n",ele,(s1.top+1));
				break;
			case 3:display(s1);
				break;
			case 4:printf("Enter the number you want to pick from the top of the stack\n");
				scanf("%d",&n);
				top_n(s1,n);
				break;
			case 5:printf("Enter the number you want to pick from the bottom of the stack\n");
				scanf("%d",&n);
				bottom_n(s1,n);
				break;
			default: printf("Invalid choice\n");
				return 0;
		}
	}
}
