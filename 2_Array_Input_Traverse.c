
#include<stdio.h>

main()
{
	
	int a[5],i; //array initialization


	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}


	printf("\n ................... ");
	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : %d",i, a[i]);
		
	}
	

}
