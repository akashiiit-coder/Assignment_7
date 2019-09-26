#include <stdio.h>
int main()
{
    int a,b,t1,t2;
    scanf ("%d%d",&a,&b);
    while(a>0)
    {
        t1=a%10;
        a/=10;
    }
    while(b>0)
    {
        t2=b%10;
        b/=10;
    }
    printf("%d",t1*t2);
}