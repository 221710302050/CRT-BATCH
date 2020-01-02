#include<stdio.h>
   
   int main()
   {
       int n,i,r,c=0,t;
       scanf("%d",&n);
       for(i=1; ;i++)
       t=i;
       while(t!=0)
       {
           r=t%10;
           if(r%2!=0)
           break;
           else
           t=t/10;
       }
       if(t==0)
       {
           c++;
           printf("%d=%d",c,n);
       }
   }
    