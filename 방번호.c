#include <stdio.h>

int chk[10];

int main ()
{
	int n,i;
	int max=0;

	scanf("%d",&n);

	while (n!=-1)
	{
		chk[n%10]+=1;
		n/=10;
		if (n==0)
			n-=1;
	}
	
	chk[9]+=chk[6];
	chk[6]=0;
	if (chk[9]%2==0)
		chk[9]/=2;
	else
		chk[9]=chk[9]/2+1;

	for (i=0;i<10;i++)
	{
		if(chk[i]>chk[i+1])
			chk[i+1]=chk[i];
		max=chk[i];
	}

	printf("%d\n", max);
}