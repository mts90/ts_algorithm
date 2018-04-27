#include <stdio.h>


char num[101];

int main ()
{
	int x=0,i=0;
	scanf("%s",num);
	
	while (1)
	{	
		for (i=0;i<10;i++)
		{
			if(num[x]=='\0')
			{
				puts("");
				return 0;
			}
			printf("%c",num[x]);
			x++;
		}
		puts("");	
	}
    return 0;
}