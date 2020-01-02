#include<stdio.h>
   
   int main()
   {
    int n,i,s=0,count,k,c;
    scanf("%d",&k);
    for(n=2;count<k;i++)
    {
        c=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==0)
        {
            count++;
            
        }
    }
    printf("%d=%d",count,n-1);
   }