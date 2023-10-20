#include<stdio.h>
main()
{
	int a[5];
	int i, element, flag=0, pos;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n Input array value : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n .............................");
	for(i=0;i<5;i++)
	{
		printf("\n\n array [%d] : %d",i,a[i]);
		
	}
	
	printf("\n\n\t Input position  :");
	scanf("%d",&pos);
	printf("\n\n\t Input element to replace  :");
	scanf("%d",&element);
	
	for(i=0;i<5;i++)
	{
		if(pos==i)
		{
			a[i]=element;
			//flag=1;
			//break;
		}
			
	}
	
	printf("\n\n .............................");
	for(i=0;i<5;i++)
	{
		printf("\n\n array [%d] : %d",i,a[i]);
		
	}
	
	/*if(flag)
		printf("\n\n Element found...");
	else
		printf("\n\n Element not found..."); */
}
