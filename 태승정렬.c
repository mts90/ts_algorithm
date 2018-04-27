#include <stdio.h>


int arr[1000];

int main ()
{
	int n;
	int i,j;
	int tmp=0;
	int min=1001;
	int m=0;
	scanf("%d",&n);

	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//ÅÂ½ÂÁ¤·Ä
	for (i=0;i<n-1;i++)                  
	{
		min=1001;
		for (j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				if(min>arr[j])
				{	m=j;min=arr[j];}
			tmp=arr[m];
			arr[m]=arr[i];
			arr[i]=tmp;
			}
		}

	}

	for (i=0;i<n;i++)                    
		printf("%d\n",arr[i]);
}