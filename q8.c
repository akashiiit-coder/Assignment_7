#include <stdio.h>
int main()
{
    int a1,a2,b1,b2;
    printf("enter first complex number\n");
    scanf("%d%di",&a1,&b1);// + or - sign terminates the entry of a1 after it just like space
    printf("enter second complex number\n");
    scanf("%d%di",&a2,&b2);// sign after a2 is treated as sign of b2;
    printf("%d%+di\n",a1+a2,b1+b2);
}