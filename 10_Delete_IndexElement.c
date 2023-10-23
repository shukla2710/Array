#include<stdio.h>
main()
{
	int arr[10], n, i, index;
	
	printf("\n\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n\n ........ Enter %d Array elements ...........",n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n Input array [%d] : ",i);
		scanf("%d",&arr[i]);	
	}
	
	printf("\n\n .............................. \n");
	printf("\n\n Enter an index of the element to be deleted : ");
	scanf("%d",&index);
	
	if(index>=n+1)
	{
		printf("\n\n Deletion is not possible with this index number... ");
	}
	
	else
	{
		for(i=index;i<=n;i++)
			arr[i]=arr[i+1];
			
			
		printf("\n\n ........... After deletion, the array : \n");
		
		for(i=0;i<n-1;i++)
			printf("\n array [%d] : %d",i, arr[i]);
	}
	
}
