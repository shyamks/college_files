#include<stdio.h>
#include<math.h>
int comp(int x,int y)
{
	if(x>=y)
		return x;
	else
		return y;
}
int main()
{
	int i,j,t,k,x,r;
	int mat[100][100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		for(i=0;i<r;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&mat[i][j]);
			}
		}
		i=j=0;
		for(i=r-1;i>0;i--)
		{	
			for(j=i;j>=0;j--)
			{
				x=comp(mat[i][j-1],mat[i][j]);
				mat[i-1][j-1]+=x;
			}
		}
		printf("%d\n",mat[0][0]);	
	}
	return 0;
}
			
