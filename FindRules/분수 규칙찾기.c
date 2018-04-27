#include <stdio.h>
#include <stdlib.h>

int main ()
{

 long long unsigned int n;

 int i=1,j=1;
 int x=1,y=2,a=0,b=0;
 int cnt=1;
 scanf("%lld",&n);

 while (cnt!=n)
 {
  a=x*(x-1)/2+1;
  b=y*(y-1)/2+1;
  if (a<=n && n<b)
  {
   if (x%2!=0)
   {
    cnt=a;
	i=x;j=1;
    while (cnt!=n)
    { 
     cnt++;
     i--;j++;
     }
   }

   else
   {
    cnt=a;
	 i=1;j=x;
    while (cnt!=n)
    {
     cnt++;
     i++;j--;
     }
   }

  }
  x++;y++;

 }

 printf("%d/%d",i,j);
 system("pause");
} 