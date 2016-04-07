#include<stdio.h>
#define MAX 40
struct stack
{
	int top;
	char a[MAX];
};

void push(struct stack *s,char ele)
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

char pop(struct stack *s)
{
	char ele;
	if(s->top==-1)
	{
		printf("Stack underflow\n");
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
		printf("Stack empty\n");
		return;
	}
	for(i=0;i<=s.top;i++)
	{
		printf("%c\n",s.a[i]);
	}
	return;
}

int main()
{
	int i;
	char str[MAX],letter,c1,c2;
	struct stack s1;
	struct stack temp;
	s1.top=-1;temp.top=-1;
	printf("Input the string:\n");
	scanf("%s",str);
	for(i=0;str[i]='\0';i++)
	{
		push(&s1,str[i]);
	}
	display(s1);
	letter=pop(&s1);
	while(letter!='c' || s1.top!=-1)
	{
		push(&temp,letter);
		letter=pop(&s1);
	}
	if(letter=='c')
	{
		while(s1.top!=-1 || temp.top!=-1)
		{
			c1=pop(&s1);
			c2=pop(&temp);
			if(c1!=c2)
			{
				printf("Invalid string format\n");
				return 0;
			}
		}
		if(s1.top==-1 && temp.top==-1)
		{
			printf("Valid string fmt\n");
			return 0;
		}
		else{
		printf("Invvalid string fmt\n");
		return 0;
		}
	}
	
}
	
