#include <stdio.h>
#include <windows.h>


void cw(int (* arr)[100],int num)
{
	int cnt=1,i=0,j=0;
	int x,y;
	int brr[100][100];


	for (y=num-1;y>=0;y--)
	{
		j=0;
		for (x=0;x<num;x++)
		{
			brr[x][y]=arr[i][j];
			j++;
		}
		i++;
	}
	for (x=0;x<num;x++)
	{	
		for (y=0;y<num;y++)
		{
			arr[x][y]=brr[x][y];
			printf("%3d ",brr[x][y]);
		}
		puts("");
	}
	puts("");	
}


void ccw(int (* arr)[100],int num)
{
	int cnt=1,i,j;
	int x,y;
	int brr[100][100];

	j=num-1;
	for (x=0;x<num;x++)
	{
		i=0;
		for (y=0;y<num;y++)
		{
			brr[x][y]=arr[i][j];
			i++;
		}
		j--;
	}
	for (x=0;x<num;x++)
	{	
		for (y=0;y<num;y++)
		{
			arr[x][y]=brr[x][y];
			printf("%3d ",brr[x][y]);
		}
		puts("");
	}
	puts("");	
}

void init_(int (* arr)[100],int num)
{
	int cnt=1,i,j;
	for (i=0;i<num;i++)
	{
		for (j=0;j<num;j++)
		{
			printf("%3d ",cnt);
			arr[i][j]=cnt++;
		}
		puts("");	
	}
	puts("");
}

void gdaero(int (* arr)[100],int num)
{
	int cnt=1,i,j;
	for (i=0;i<num;i++)
	{
		for (j=0;j<num;j++)
		{
			printf("%3d ",arr[i][j]);
		}
		puts("");	
	}
	puts("");
}


void T_T(int num)
{
	printf("�迭�� ����:%d\n",num);

	printf("1. �ʱ�ȭ   2. 90�� ȸ��  3. 90�� ��ȸ��  4. �迭 ����  5. ����\n");
	printf("===================================================================\n");
}

int main ()
{
	int i,j,n=0,num,cnt=1;
	int arr[100][100];


	printf("�迭�� ����:");
	scanf("%d",&num);
	system("cls");
	while (n!=5)
	{

		T_T(num);


		if (n==1)
			init_(arr,num);

		else if (n==2)
			cw(arr,num);

		else if (n==3)
			ccw(arr,num);

		else if (n==4)
		{
			gdaero(arr,num);
			printf("�迭�� ũ�⸦ ������ �ٲٽǷ���?: ");
			scanf("%d",&num);
			system("cls");

			T_T(num);
			init_(arr,num);
		}

		printf("��ȣ�� �������ּ���:");
		scanf("%d",&n);
		puts("");
		system("cls");

	}

}