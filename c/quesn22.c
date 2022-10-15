#include<stdio.h>
int main()
{
 int x,n,i,j,k=0,h,sum;
 printf("\n Enter size of the array \n");
 scanf("%d",&n);
 int a[n];
 
 printf("\n Enter the array of non-negative integers\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 printf("\n Enter a number \n");
 scanf("%d",&x);
 
 for(i=0;i<n;i++)
 {
 sum=0;
 for(j=i;j<n;j++)
 {
 sum=sum+a[j];
 if(sum==x)
 {
 h=i;
 k=j;
 }
 else if(sum>x)
 break; 
 }
 if(k!=0)
 break;
}

  printf("\n The continuous sub array is \n");
  for(i=h;i<=k;i++)
  printf("%d\n",a[i]);
  
 return (0);
}
