#include<stdio.h>

main()
{
	
	int a[10],i; //array initialization
	

	for(i=0;i<10;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}


	printf("\n Even Numbers ................... ");
	for(i=0;i<10;i++)
	{
			if(a[i]%2==0)
				printf("\n a[%d] : %d",i, a[i]);
	}	
	
	printf("\n Odd Numbers ................... ");
	for(i=0;i<10;i++)
	{
			if(a[i]%2!=0)
				printf("\n a[%d] : %d",i, a[i]);
	}	
		
	
}
