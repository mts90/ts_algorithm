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
	// 입력받은 비밀번호를 pw배열에 하나하나씩 저장 12345 입력시 pw배열에 12345로 저장 
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


	// 난수로 저장된 비밀번호와 내가 쓴 비밀번호 비교
	for (i=0;i<num;i++)         
	{
		if (pw[i]==pwarr[i]) 
		{
			cnt++;
			// 같은 수는 체크배열에 1을 넣어서 중복된 수를 또다시 검색하는 예외를 처리한다.
			chk[i]=1;         
		}
	}

	// 중복된 수에 대한 예외처리를 해줘야함.
	for (i=0;i<num;i++)                 
	{
		for (j=0;j<num;j++)
		{
			if (chk[i]!=1)
			{
				// 중복된 수에 대한 예외처리를 해줘야함. check 배열을 만들어서 중복되면 넘어감.				
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
		printf("비밀번호 길이를 설정:");
		scanf("%d",&num);

		system ("cls");
		srand(time(0));

		if (num>=5)
		{
			for (i=0;i<num;i++)
			{
				printf("□");
				// 랜덤한 비밀번호를 pwarr에 저장. 
				pwarr[i]=(rand()%10);
			}	 						
			puts("");
		}

		else 
			puts("보안에 취약합니다. 5개 이상 지정해주세요.");	
	}
	count=num-2;
	while (1)
	{
		while (k!=num)
		{
			k=0;
			printf("비밀번호를 입력해주세요:");
			scanf("%d",&mypw);

			mypassworld();
			if (k==num)
				break;
			puts("비밀번호 다시 입력");	

		}
		system("cls");    // 화면 클리어
		check();
		for (i=0;i<num;i++)
			printf("□");
		puts("");
		
		printf("==============================\n");
		if (count != 0)
		{
			printf("%d개 중 %d개는 같습니다.\n",num,cnt);
			printf("%d개 중 %d개는 위치가 다릅니다.\n",num,cnt2);
			printf("%d개는 아예 틀립니다.\n",num-cnt-cnt2);
		}
		else if (count == 0)
		{
			printf("삐용삐용 경찰출동\n");
			printf("==============================\n");
			break;
		}
		printf("==============================\n");
		count--;
		reset();
	}
}