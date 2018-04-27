#include <stdio.h>



int main ()
{
	long long unsigned int n;

	int x=1,a=1,b=7;
	scanf("%lld",&n);

	while (1)
	{
		if (n==1)
		{printf("1\n");break;}
		x++;
		if(a<n && n<=b)
		{printf("%d\n",x);break;}
		a=3*x*(x-1)+1;//현재항
		b=a+(6*x);//다음항
	}
}