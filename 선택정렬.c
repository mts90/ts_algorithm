#include <stdio.h>
// ��ũ�θ� �̿��ؼ� swap�� ������.
#define swap( x, y ) { x=x^y; y=x^y; x=x^y; }
int arr[1000];

int main ()
{
	int n;
	int i,j;
	int tmp=0;
	int min=1001;
	int m=0;
	scanf("%d",&n);

	puts("======");

	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);

	puts("======");

	// ��������


	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}


	for (i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}

}