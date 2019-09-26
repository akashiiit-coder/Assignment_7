#include <stdio.h>
int main()
{
    int i,n,t,t1;
    scanf("%d",&n);
    while (n>0)
    {
        t=n%10;
        if (t%2==0)
        {
            t1=t;
        }
        n=n/10;
    }
    printf("%d",t1);
}