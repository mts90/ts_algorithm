#include <stdio.h>
#include <stdlib.h>

long long arr[68];
long long koong(int n)
{
	int i;
	if(arr[n]!=0)         //메모제이션 내가 체크했던 곳에 값이 있다면 또 계산 하지 않고 바로 값만 받아서 연산한다.
		return arr[n];
	if (n<2)
	{arr[0]=1;arr[1]=1;}
	else if (n==2)
		arr[2]=2;
	else if (n==3)
		arr[3]=4;
	else 
	{
		for (i=1;i<5;i++)
		{
			arr[n]+=koong(n-i);
		}
	}
	return arr[n];
}


int main ()
{
	int t,n;
	long long v;
	scanf("%d",&t); // 0~69

	while (t!=0)
	{
		scanf("%d",&n); // 0~67
		v = koong(n); //함수를 사용하는 이유는 반환값을 받기위해서다.
		printf("%lld\n", v);
		t--;
	}
}