#include<stdio.h>
main()
{
	int b,p,q,r,x;
	q=0;
	printf("Enter the number of rows : ") ;
	scanf("%d",&p) ;
	printf("\n Pyramid is : \n\n") ;
	while (p>q)
	{
		for(r=40-3*q;r>0;--r)
		
			printf(" ");
			for(x=0;x<=q;++x)
				printf("%6d",q+1);
				printf("\n\n");
				++q;
	}
}
			
