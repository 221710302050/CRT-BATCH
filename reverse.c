/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        
    }
    printf("%d",s);
}