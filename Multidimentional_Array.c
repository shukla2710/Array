//Multidimentional Array

#include<stdio.h>
main()
{
	int arr[3][2][2] = {  {{1,2},{3,4}},  
	                      {{1,2},{3,4}}, 
						  {{1,2},{3,4}} } ;  
	int i, j, k;
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<2;++j)
		{
			for(k=0;k<2;++k)
			{
				printf("\n Element [%d][%d][%d] : %d",i,j,k,arr[i][j][k]);
			}
		}
		
		printf("\n");
	}
}
