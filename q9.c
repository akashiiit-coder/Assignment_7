#include <stdio.h>
int main()
{
    int a1,a2,b1,b2,b;
    printf("enter first complex number\n");
    scanf("%d%di",&a1,&b1);// + or - sign terminates the entry of a1 after it just like space
    printf("enter second complex number\n");
    scanf("%d%di",&a2,&b2);// sign after a2 is treated as sign of b2;
    b=a2*a2+b2*b2;
    printf("product => %d%+di\n",a1*a2-b1*b2,a1*b2+a2*b1);
     printf("quotient => %d%+di\n", a1*a2/b + b1*b2/b , -a1*b2/b + a2*b1/b);
}