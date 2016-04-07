#include<stdio.h>
#include<stdlib.h>
#define INFINITY 2000
#define MAXNODES 4
#define MEMBER 1
#define NONMEMBER 0
void shortpath(int weight[][MAXNODES],int s, int t, int *pd, int precede[])
{
  	int distance[MAXNODES],perm[MAXNODES];
  	int current,i,j,k,dc;
	int smalldist,newdist;
	/* initialization of perm and distance array */
	for(i=0;i<MAXNODES;i++)
	{
		perm[i]=NONMEMBER;
		distance[i]=INFINITY;
	}
	perm[s] = MEMBER;
	distance[s] = 0;
	current = s;
	while(current != t)
	{
		smalldist=INFINITY;
		dc=distance[current];
		for(i=0;i<MAXNODES;i++)
		{
			if(perm[i]==NONMEMBER)
			{
				newdist = dc + weight[current][i];
				if(newdist < distance[i])
				{
					distance[i]=newdist;
					precede[i]=current;
				}
				if(distance[i] < smalldist)
				{
					smalldist = distance[i];
					k=i;
				}
			} /* end of for if */
		}
		current = k;
		perm[current]=MEMBER;
	}  /* END WHILE */
	*pd=distance[t];
}    /* end of shortpath function */
