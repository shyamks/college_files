#include<stdio.h>
main()
{
	int i,j,n[100];
	printf("Enter 5 nos\n");
	for(i=0;i<5;i++)	
	{
		scanf("%d",&n[i]);
		/*if(n[i]==5)
		{*/
		break;
		/*}
*/	}
	for(j=i+1;j<5;j++)
	{
		n[j]=0;
	}
	printf("The nos are\n");
	for(i=0;i<5;i++)	
	{
		printf("%d\n",n[i]);
	}
}
