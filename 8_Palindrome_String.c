#include<stdio.h>
main()
{
	char str[20];
	int flag, i, len=0;
	
	printf("\n\n Input your name : ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
			if(str[i] != str[len-i-1])
			{
				flag=1;
				break;
			}
	}
	
	if(flag)
		printf("\n\n string is not palindrome.. ");
	else
		printf("\n\n String is palindrome.. ");
	
}
