#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char search(int input)
{
	int i,copy=0;
	copy=input;
	for (i=0;i<10;i++)
	{
		if (input%10==3 || input%10==6 || input%10==9)
		{return'X'; break;}
		else
			input/=10;
	}
	return copy;
}
int main ()
{
 int num;
 int input;
 char nw; 

 scanf("%d",&num);

 for (input=0;input<num;input++)
 {
		nw=search(input+1);
		if (nw=='X')
			printf("X ");
		else 
			printf("%d ",nw);
 } 
} 