#include<stdio.h>
int main()
{
    int a, b,i=1;
    printf("enter the number\n");
    scanf("%d", &a);
    while (i<=10)
    {
        int v = a*i;
        printf("%d  * %d  = %d \n",a,i,v);
        i++;
    }
}