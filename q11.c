#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lfx^2 %lfx %lf",&a,&b,&c);
    if(pow(b,2)-4*a*c>=0)
    {

    
    double r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    double r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    if(r1==r2)
    printf("roots are equal =%lf\n",r1);
    else
    printf("roots are unequal =%lf,%lf\n",r1,r2);
}
else 
{
    double i=sqrt(-pow(b,2)+4*a*c)/(2*a);
    double r=-b/(2*a); 
    printf("%lf+%lfi\n",r,i);
    printf("%lf-%lfi\n",r,i);
}
}
