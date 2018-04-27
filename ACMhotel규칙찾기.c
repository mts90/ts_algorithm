#include <stdio.h>

int main ()
{
	int test;
	int h,w,n;
	int x=1,y=1,a=1,b=101,c=1;
	int arr[100][100]={0};
	int brr[100][100]={0};
	int i,j;


	
	scanf("%d",&test);

	while (test!=0)
	{

		a=1; b=101; c=1; 
		scanf("%d %d %d",&h,&w,&n);

		for (j=0;j<w;j++)
		{
			for (i=h-1;i>=0;i--)
			{ 
				arr[i][j]=a;
				a++;
			}
		}

		for (i=h-1;i>=0;i--)
		{
			b=100*c+1;
			for (j=0;j<w;j++)
			{ 
				brr[i][j]=b;
				b++;
			}
			c++;
		}

		for (i=0;i<h;i++)
		{
			for (j=0;j<w;j++)
			{
				if(arr[i][j]==n)
				{
					printf("%3d",brr[i][j]);
				}
			}
		}
		test--;
		puts("");
	}

}