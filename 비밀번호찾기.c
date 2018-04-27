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
// 입력받은 비밀번호를 pw배열에 하나하나씩 저장 12345 입력시 pw배열에 12345로 저장 
	for (i=num-1;i>=0;i--)  
	{
		pw[i]=mypw%10;
		mypw=mypw/10;
	}

// 난수로 저장된 비밀번호와 내가 쓴 비밀번호 비교
	for (i=0;i<num;i++)         
	{
		if (pw[i]==pwarr[i]) 
			cnt++;
	}

// 같은 수는 체크배열에 1을 넣어서 중복된 수를 또다시 검색하는 예외를 처리한다.
	for (i=0;i<num;i++)                   
	{
		if (pwarr[i]==pw[i])
			chk[i]=1;
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
	printf("비밀번호 길이를 설정:");
	scanf("%d",&num);

	for(i=0;i<num;i++)
		pwarr[i]=(rand()%10);   // 랜덤한 비밀번호를 pwarr에 저장.  

/*
	for(i=0;i<num;i++)
		printf("%d ",pwarr[i]);
		puts("");
*/
	while (1)
	{
		printf("비밀번호를 입력해주세요:");
		scanf("%d",&mypw);
		
		system ("cls");
		mypassworld();
		printf("비밀번호 길이는 %d\n",num);
		printf("==============================\n");
		printf("%d개 중 %d개는 같습니다.\n",num,cnt);
		printf("%d개 중 %d개는 위치가 다릅니다.\n",num,cnt2);
		printf("%d개는 아예 틀립니다.\n",num-cnt-cnt2);
		printf("==============================\n");
		reset();
	}

}