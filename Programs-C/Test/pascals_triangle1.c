#include<stdio.h>
main()
{
	int b,p,q,r,x;
	q=0;
	printf("Enter the number of rows : ") ;
	scanf("%d",&p) ;
	printf("\nPascal's triangle is : \n\n") ;
	while (p>q)
	{
		for(r=40-3*q;r>0;--r)
		
			printf(" ");
			for(x=0;x<=q;++x)
			{	
				if((x==0)||(q==0))
					{b=1;printf("%6d",b);}
				else
					{b=(b*(q-x+1))/x ;
					printf("%6d",b);}
			}
			
		
		printf("\n\n") ;
			++q ;
	}
}
	
