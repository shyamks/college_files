//Traversal from one point to another in a matrix // 1-path, 2-blocked path
//Program still in development(ie not working)

#include<stdio.h>
#include<stdlib.h>
int min(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
		
int trav(int a[20][20],int sx,int sy,int ex,int ey,int n)
{
	if(sx >=0 && sy>=0 && sx<n && sy<n)
	{
		/*if(a[sx][sy]==1 &&(sx!=ex || sy!=ey))
		{
			return min(min(1+trav(a,sx+1,sy,ex,ey,n),1+trav(a,sx-1,sy,ex,ey,n)),min(1+trav(a,sx,sy+1,ex,ey,n),1+trav(a,sx,sy-1,ex,ey,n)));
		}
		else if(sx==ex && sy==ey)
			return 0;*/
		if(a[sx][sy]==1 &&(sx!=ex || sy!=ey))
		{
			trav(a,sx+1,sy,ex,ey,n);
			trav(a,sx-1,sy,ex,ey,n);
			trav(a,sx,sy+1,ex,ey,n);
			trav(a,sx,sy-1,ex,ey,n);
		}
		else if(sx==ex && sy==ey)
		{
			printf("Target reached\n");
			return 0;
		}
	}
	//return 0;
}
int main()
{
	int n,i,sx,sy,ex,ey,j;
	scanf("%d",&n);
	int a[20][20];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&sx,&sy);
	scanf("%d %d",&ex,&ey);
	int minn=trav(a,sx,sy,ex,ey,n);
	printf("%d\n",minn);
	return 0;
}
	
