#include<stdio.h>
#define MAX 50
struct stack
{
	char a[MAX];
	int top;
};
void push(struct stack *s,char ele)
{
	if(s->top==MAX-1)
	{
		printf("Full\n");
		return;
	}
	else
		s->a[++(s->top)]=ele;
}
char pop(struct stack *s)
{
	/*if(s->top==-1)
	{
		printf("Empty\n");
		return;
	}
	else*/
		return (s->a[(s->top)--]);
}
void display(struct stack s)
{
	int i;
	if(s.top==-1)
		printf("Empty stack\n");
	else
	{
		for(i=0;i<=s.top;i++)
			printf("%c",s.a[i]);
		printf("\n");
	}
}
int main()
{
	int i;
	struct stack s1,temp;
	s1.top=temp.top=-1;
	char str[MAX],letter,c1,c2;
	printf("Enter string\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		push(&s1,str[i]);
	printf("The input string is\n");
	display(s1);
	letter=pop(&s1);
	while(letter!='c'&&s1.top!=-1)
	{
		push(&temp,letter);
		letter=pop(&s1);
	}
	if(letter=='c')
	{
		while(s1.top!=-1||temp.top!=-1)
		{
			c1=pop(&s1);
			c2=pop(&temp);
			if(c1!=c2)
			{
				printf("invalid\n");
				return 0;
			}
		}
		if(s1.top==-1&&temp.top==-1)
		{
			printf("Valid formatt\n");
			return 0;
		}
	}
	printf("Invalllidd\n");
	return 0;
}
