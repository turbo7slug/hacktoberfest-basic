#include<stdio.h>
int main(void)
{
   int n,x=1;
   printf("Enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
       x=x*n;
       n--;
   }
   printf("%d",x);
}
