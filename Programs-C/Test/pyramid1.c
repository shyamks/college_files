#include<stdio.h>
main( )
{
	int r, c, num=1 ,len;
	printf("Enter the required no. of rows:");
	scanf("%d", &len);
	for( r=1; r<=len; r++ )
	{
		printf("\n");
		for(c=1 ; c<=r; c++)
		{
			printf("%2d ", num);
			num++;
		}
	}
}
