#include<stdio.h>
main()
{
	int arr[20],i, size, min;
	
	printf("\n\n Input array size : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
			printf("\n\n Input element[%d] : ",i);
			scanf("%d",&arr[i]);	
	}

	min=arr[0];
	
	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	
	printf("\n\n Minimum Element : %d", min);
		
}
