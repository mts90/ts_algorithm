#include <stdio.h>

int arr[5][5];

int main ()
{
	int n; // �迭�� ũ��
	int i,j,x=0,y=0;
	int k=0;//�迭�� ������� ����
	int reverse=1;
	int t;
	int tmp;

	scanf("%d",&n);
	t=n;
	while (k!=n*n)
	{
		for (j=0;j<t;j++)
		{
			arr[x][y]=++k;
			y+=reverse;
		}
		t--;y-=reverse;
		for (j=0;j<t;j++)
		{
			x+=reverse;
			arr[x][y]=++k;
		}
		y-=reverse;
		reverse=reverse*(-1);
	}


	for (i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
			printf("%4d",arr[i][j]);
		puts("");
	}
}