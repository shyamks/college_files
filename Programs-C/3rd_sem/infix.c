#include<stdio.h>
#define MAX 50
#include<ctype.h>
struct stack
{
   char a[MAX];
   int top;
};

struct stack s1;

void push(char ele)
{
   if(s1.top==MAX-1)
   	return;
   s1.a[++s1.top]=ele;
   return;

}
char pop()
{
   char ele;
   if(s1.top==-1)
   	return -1;
   ele=s1.a[s1.top--];
   return ele;
}
int pr(char ele)
{
   if(ele=='#')
   	return 0;
   else if(ele=='(')
  	 return 1;
   else if(ele=='+'||ele=='-')
   	return 2;
   else
  	return 3;
}

int main()
{
	s1.top=-1;
	char infix[50],pofx[50];
	char ele,ch;
	int i=0,k=0;
	printf("Enter the infix expression\n");
	scanf("%s",infix);
	push('#');
	while((ch=infix[i++])!='\0')
	{
		if(ch=='(')
			push(ch);
		else if(isalnum(ch))
			pofx[k++]=ch;
		else if(ch==')')
		{
			while(s1.a[s1.top]!='(')
             		{
				pofx[k++]=pop();

			}
			ele=pop();
		}
		else
		{
			while(pr(s1.a[s1.top])>=pr(ch))
				pofx[k++]=pop();
			push(ch);
		}

	}
	while(s1.a[s1.top]!='#')
	{
		pofx[k++]=pop();
	}
	pofx[k++]='\0';
	printf("infix:%s,postfix:%s\n",infix,pofx);
	return 0;


}
