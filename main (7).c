#include<stdio.h>
   
   int main()
   {
       int n,t,r;
       scanf("%d",&n);
       t=n%10;
       while(n!=0)
       {
           r=n%10;
           n=n/10;
       }
       printf("%d",r+t);
   }
    