#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int i,j=0,nan=0,num=0,cnt=0,cnt2=0;
int mypw,pw[11];
int pwarr[11];
int chk[11];

void mypassworld()
{
// �Է¹��� ��й�ȣ�� pw�迭�� �ϳ��ϳ��� ���� 12345 �Է½� pw�迭�� 12345�� ���� 
	for (i=num-1;i>=0;i--)  
	{
		pw[i]=mypw%10;
		mypw=mypw/10;
	}

// ������ ����� ��й�ȣ�� ���� �� ��й�ȣ ��
	for (i=0;i<num;i++)         
	{
		if (pw[i]==pwarr[i]) 
			cnt++;
	}

// ���� ���� üũ�迭�� 1�� �־ �ߺ��� ���� �Ǵٽ� �˻��ϴ� ���ܸ� ó���Ѵ�.
	for (i=0;i<num;i++)                   
	{
		if (pwarr[i]==pw[i])
			chk[i]=1;
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
	cnt=0;cnt2=0;
	for (i=0;i<11;i++)
	{
	pw[i]=0;
	chk[i]=0;
	}
}

int main ()
{
	srand(time(0));
	printf("��й�ȣ ���̸� ����:");
	scanf("%d",&num);

	for(i=0;i<num;i++)
		pwarr[i]=(rand()%10);   // ������ ��й�ȣ�� pwarr�� ����.  

/*
	for(i=0;i<num;i++)
		printf("%d ",pwarr[i]);
		puts("");
*/
	while (1)
	{
		printf("��й�ȣ�� �Է����ּ���:");
		scanf("%d",&mypw);
		
		system ("cls");
		mypassworld();
		printf("��й�ȣ ���̴� %d\n",num);
		printf("==============================\n");
		printf("%d�� �� %d���� �����ϴ�.\n",num,cnt);
		printf("%d�� �� %d���� ��ġ�� �ٸ��ϴ�.\n",num,cnt2);
		printf("%d���� �ƿ� Ʋ���ϴ�.\n",num-cnt-cnt2);
		printf("==============================\n");
		reset();
	}

}