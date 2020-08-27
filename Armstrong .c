
#include <stdio.h>

int main()
{
   int a,n,b=0,t;
   printf("enter the number");
   scanf("%d",&n);
   t=n;
   while(n>0)
   {
   	a=n%10;
   	b=b+a*a*a;
   	n=n/10;
   }
   if(b==t)
   {
   	printf("armstrong number");
   }
   else
   {
   	printf("not an armstrong number ");
   	
   	}
   	}
