#include<stdio.h>

main()
{
	
	int a[5],i,element, flag=0; 


	for(i=0;i<5;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}

	printf("\n\n Enter element to search : ");
	scanf("%d",&element);
	
	printf("\n ................... ");
	for(i=0;i<5;i++)
	{
		
			if(element==a[i])
			{
					flag=1;
					printf("\n\n Got it at a[%d] : %d",i, a[i]);
			}
			
		
	}
	
	if(flag==1)
		printf("\n\n Element found...");
		
	else
		printf("\n\n Element not found...");
	

}
