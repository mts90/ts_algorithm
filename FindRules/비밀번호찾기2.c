#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int i,j=0,nan=0,num=0,cnt=0,cnt2=0, count=0;
int k=0;
int mypw,mymy,pw[11];
int pwarr[11];
int chk[11];

void mypassworld()
{
	// �Է¹��� ��й�ȣ�� pw�迭�� �ϳ��ϳ��� ���� 12345 �Է½� pw�迭�� 12345�� ���� 
	mymy=mypw;
	while (mymy!=0)
	{
		mymy/=10;
		k++;
	}

	for (i=k-1;i>=0;i--)
	{
		pw[i]=mypw%10;
		mypw=mypw/10;
	}
}

void check()
{


	// ������ ����� ��й�ȣ�� ���� �� ��й�ȣ ��
	for (i=0;i<num;i++)         
	{
		if (pw[i]==pwarr[i]) 
		{
			cnt++;
			// ���� ���� üũ�迭�� 1�� �־ �ߺ��� ���� �Ǵٽ� �˻��ϴ� ���ܸ� ó���Ѵ�.
			chk[i]=1;         
		}
	}

	// �ߺ��� ���� ���� ����ó���� �������.
	for (i=0;i<num;i++)                 
	{
		for (j=0;j<num;j++)
		{
			if (chk[i]!=1)
			{
				// �ߺ��� ���� ���� ����ó���� �������. check �迭�� ���� �ߺ��Ǹ� �Ѿ.				
				if (i!=j)
				{ 
					if (pwarr[i]==pw[j])  
					{
						cnt2++;
						break;
					}
				}
			}
		}
	}
}

void reset()
{
	cnt=0;cnt2=0,k=0;
	for (i=0;i<11;i++)
	{
		pw[i]=0;
		chk[i]=0;
	}
}

int main ()
{
	k=0;
	while (num<5)
	{
		printf("��й�ȣ ���̸� ����:");
		scanf("%d",&num);

		system ("cls");
		srand(time(0));

		if (num>=5)
		{
			for (i=0;i<num;i++)
			{
				printf("��");
				// ������ ��й�ȣ�� pwarr�� ����. 
				pwarr[i]=(rand()%10);
			}	 						
			puts("");
		}

		else 
			puts("���ȿ� ����մϴ�. 5�� �̻� �������ּ���.");	
	}
	count=num-2;
	while (1)
	{
		while (k!=num)
		{
			k=0;
			printf("��й�ȣ�� �Է����ּ���:");
			scanf("%d",&mypw);

			mypassworld();
			if (k==num)
				break;
			puts("��й�ȣ �ٽ� �Է�");	

		}
		system("cls");    // ȭ�� Ŭ����
		check();
		for (i=0;i<num;i++)
			printf("��");
		puts("");
		
		printf("==============================\n");
		if (count != 0)
		{
			printf("%d�� �� %d���� �����ϴ�.\n",num,cnt);
			printf("%d�� �� %d���� ��ġ�� �ٸ��ϴ�.\n",num,cnt2);
			printf("%d���� �ƿ� Ʋ���ϴ�.\n",num-cnt-cnt2);
		}
		else if (count == 0)
		{
			printf("�߿�߿� �����⵿\n");
			printf("==============================\n");
			break;
		}
		printf("==============================\n");
		count--;
		reset();
	}
}