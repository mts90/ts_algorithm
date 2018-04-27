#include <stdio.h>

int main ()
{

	int last[13]={31,28,31,30,31,30,31,31,30,31,30,31};//요일저장배열
	int x,y;

	int i,sum=0;

	while (1)
	{
	scanf("%d %d",&x,&y);


	for (i=0;i<(x-1);i++)
		sum+=last[i];

	sum+=y;

	if (sum%7==0)
		puts("SUN");
	else if (sum%7==1)
		puts("MON");
	else if (sum%7==2)
		puts("TUE");
	else if (sum%7==3)
		puts("WED");
	else if (sum%7==4)
		puts("THU");
	else if (sum%7==5)
		puts("FRI");
	else if (sum%7==6)
		puts("SAT");
	sum=0;
	}

}