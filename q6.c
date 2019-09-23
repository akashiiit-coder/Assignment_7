#include <stdio.h>
#include <math.h>
int main()
{
    int a1,a2,a3;
    scanf("%di%dj%dk",&a1,&a2,&a3);
    float mag=sqrt(a1*a1+a2*a2+a3*a3);
    printf("%+fi%+fj%+fk",a1/mag,a2/mag,a3/mag);
   
}