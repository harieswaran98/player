#include<stdio.h>

int main() {
   int x,a[100],b,i,j;
   scanf("%d %d",&x,&b);
   for(i=0;i<x;i++)
   {
       scanf("%d",&a[i]);
   }
  
   while(b)
   {
        j=a[x-1];
     for(i=x-1;i>=0;i--)
     {
       a[i+1]=a[i];  
     }
     a[0]=j;
     b--;
   }
   for(i=0;i<x;i++)
   {
       printf("%d",a[i]);
   }
}
