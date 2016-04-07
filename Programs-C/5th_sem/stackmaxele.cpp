#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#define MAX 50
using namespace std;
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
		return -1;
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
void maxstk(struct stack *s,int max,int *var)
{
	if(s->top==-1)
	{
		*var=max;
		return;
	}
	else
	{
		int ele=pop(s);
		if(max<ele)
			max=ele;
		maxstk(s,max,var);
		push(s,ele);
	}
}
	
int main()
{
	struct stack s1;
	s1.top=-1;
	int n=1,v;
	while(n)
	{
		cin>>n;
		if(n!=0)
			push(&s1,n);
	}
	int maxele=s1.a[s1.top];
	maxstk(&s1,maxele,&v);
	cout<<v<<endl;
	display(s1);
	return 0;
	
}
