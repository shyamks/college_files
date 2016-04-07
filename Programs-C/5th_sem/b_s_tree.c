#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int info;
	struct Node *left, *right;
};

int c;
typedef struct Node* N;
N tree=NULL;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int height(N root)
{
	if(root==NULL)
		return 0;
	else
		return max(height(root->left)+1,height(root->right)+1);
}
/*int maxDepth(N node)
{
   if (node==NULL)
       return 0;
   else
   {
      
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);
 
       
       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}*/
N getNode(int ele)
{
	N temp=(N)malloc(sizeof(struct Node));
	temp->left=temp->right=NULL;
	temp->info=ele;
	return temp;
}

void ins(int ele)
{
	if(tree==NULL)
		tree=getNode(ele);
	else
	{
		N cur=tree,prev=NULL;
		while(cur!=NULL)
		{
			prev=cur;
			if(cur->info>ele)
				cur=cur->left;
			else
				cur=cur->right;
		}
		if(ele<prev->info)
			prev->left=getNode(ele);
		else
			prev->right=getNode(ele);
	}
	printf("Element inserted!!!");
}

void del(int ele)
{
	N cur=tree, prev=NULL,s,t;
	while((cur!=NULL)&&(cur->info!=ele))
	{
		prev=cur;
		if(cur->info>ele)
			cur=cur->left;
		else
			cur=cur->right;
	}
	if(cur==NULL)
	{
		printf("Element not found");
		return;
	}
	if(cur->right==NULL)
		t=cur->left;
	else if(cur->left==NULL)
		t=cur->right;
	else
	{
		s=cur->right;
		while(s->left!=NULL)
			s=s->left;
		s->left=cur->left;
		t=cur->right;
	}
	if(prev==NULL)
		tree=t;
	else
	{	if(cur==prev->right)
			prev->right=t;
		else
			prev->left=t;
	}
	free(cur);
	printf("Element deleted!!!");
}

void display(N p)
{
	if(p==NULL)
		return;
	else
	{
		display(p->left);
		printf("%d ",p->info);
		display(p->right);
	}
}

void count(N p)
{
	if(p==NULL)
		return;
	count(p->left);
	if(p->left==NULL&&p->right==NULL)
		c++;
	count(p->right);
}

void calc(N p,int *sum)
{
	if(p==NULL)
		return;
	calc(p->left,sum);
	*sum+=p->info;
	calc(p->right,sum);
}

int main()
{
	int ch,n,sum=0;;
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Count leaf node\n4.Display\n5.Height of the tree\n6.Sum of the elements\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter the element\n");
				scanf("%d",&n);
				ins(n);
				break;
			}
			case 2:
			{
				printf("Enter the element\n");
				scanf("%d",&n);
				del(n);
				break;
			}
			case 3:
			{
				c=0;
				count(tree);
				printf("Number of leaf nodes: %d",c);
				break;
			}
			case 4:
			{
				printf("Tree elements in inorder:\n");
				display(tree);
				break;
			}
			/*case 5:
			{
				printf("The height of the tree is %d\n",maxDepth(tree));
				break;
			}*/
			case 6:
			{	
				calc(tree,&sum);
				printf("The sum of the elements in the tree is %d\n",sum);
				break;
			}
			default:
			{
				return 0;
			}
		}
	}
}

