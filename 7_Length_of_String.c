#include<stdio.h>
main()
{
	char str[20];
	int count=0, i;
	
	printf("\n\n Input your name : ");
	gets(str);
	
	i=0;
	while(str[i]!='\0')
	{
		count++;
		
		i++;
	}
	
	printf("\n\n Total length of your name : %d",count);
}
