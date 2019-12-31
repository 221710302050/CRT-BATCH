#include <stdio.h>

void main()
{
int a,b,op;
scanf("%d%d",&a,&b);
scanf("%d",&op);
switch(op)
{
    case 1:printf("%d",a+b);
    break;
    case 2:printf("%d",a-b);
    break;
    case 3:printf("%d",a*b);
    break;
    case 4:printf("%d",a/b);
    break;
    case 5:printf("%d",a%b);
    break;
    default:printf("invalid input");
}
}