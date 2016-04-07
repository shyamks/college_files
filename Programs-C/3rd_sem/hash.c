#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max];
int create(int );
void hash(int ,int );
void display(int[]);
int main()
{
	int i,key,num,ch;
	for(i=0;i<max;i++)
		a[i]=-1;
	do	
	{	
		printf("enter a number\n");
		scanf("%d",&num);
		key=create(num);
		hash(key,num);
		printf("continue\n");
		scanf("%d",&ch);
	}while(ch!=-1);
	display(a);
	return 0;
}
int create(int num)
{
	int key;
	key=num%10;
	return key;
}
void hash(int key,int num)
{
	int count=0,i,flag=0;
	if(a[key]==-1)
	{	
		a[key]=num;
		return;	
	}
	for(i=0;i<max;i++)
	{
		if(a[i]!=-1)
			count++;
	}
	if(count==max)
	{
		printf("hash table full\n");
		display(a);
		exit(0);
	}

	for(i=key+1;i<max;i++)
	{
		if(a[i]==-1)
		{	
			a[i]=num;
			flag=-1;
			break;
		}
	}
	for(i=0;(i<key)&&(flag=0);i++)
	{	
		if(a[i]==-1)
		{
			a[i]=num;
			flag=1;
			break;
		}
	}

}
void display(int a[max])
{
	int i;
	for(i=0;i<max;i++)
	{
		if(a[i]!=-1)	
			printf("%d@%d\n",a[i],i);
	}
}
