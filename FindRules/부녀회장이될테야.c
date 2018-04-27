#include <stdio.h>



int main ()
{
	int apart[15][15];
	int test,i,j,a=1;
	int k,n;
	scanf("%d",&test);

	for (i=0;i<15;i++)
	{
		apart[14][i]=a;
		apart[i][0]=1;
		a++;			
	}

	for (i=13;i>=0;i--)
		for (j=1;j<15;j++)
			apart[i][j]=apart[i][j-1]+apart[i+1][j];
	/*for (i=0;i<15;i++)
	{
	for (j=0;j<15;j++)
	printf("%10d",apart[i][j]);
	puts("");
	}*/

	while (test!=0)
	{
		scanf("%d",&k);
		scanf("%d",&n);

		i=0;j=0;
		i=14-k;
		j=n-1;

		printf("%d",apart[i][j]);
		puts("");

		test--;
	}
}