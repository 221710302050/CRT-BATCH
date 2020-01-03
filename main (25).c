#include<stdio.h>
void main()
{
    int i,j,k=1,a;
    for(i=1;i<=4;i++)
    {
        a=k;
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        for(j=k-2;j>=a;j--)
        printf("%d",j);
           
        }
            printf("\n");
        }
    
