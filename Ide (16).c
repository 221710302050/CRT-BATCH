#include <stdio.h>

void main()
{
int a,b,op;
scanf("%d%d",&a,&b);
scanf("%d",&op);
switch(op)
{
    case '+':printf("%d",a+b);
    break;
    case '-':printf("%d",a-b);
    break;
    case '*':printf("%d",a*b);
    break;
    case '/':printf("%d",a/b);
    break;
    case '%':printf("%d",a%b);
    break;
    case '\n':printf("hello");
    break;
    default:printf("invalid input");
}
}