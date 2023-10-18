#include<stdio.h>

main()
{
	
	int a[10],i; //array initialization
	int even=0, odd=0;

	for(i=0;i<10;i++)
	{
			printf("\n\n a[%d] : ",i);
			scanf("%d",&a[i]);
	}


	printf("\n ................... ");
	for(i=0;i<10;i++)
	{
			if(a[i]%2==0)
				even++;
				
			else
				odd++;
			
			printf("\n\n a[%d] : %d",i, a[i]);
		
	}
	printf("\n ............................ ");
	printf("\n\n Total even numbers are  : %d",even); 
	printf("\n\n Total odd numbers are  : %d",odd); 

}
