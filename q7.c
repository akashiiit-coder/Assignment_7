#include <stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2;
    scanf("%di%dj%dk",&a1,&b1,&c1);
    scanf("%di%dj%dk",&a2,&b2,&c2);
    printf("cross product is => %di%+dj%+dj\n",b1*c2-c1*b2,c1*a2-c2*a1,a1*b2-b1*a2);
   
}