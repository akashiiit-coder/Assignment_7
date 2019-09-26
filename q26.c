#include <stdio.h>
int main()
{
    int i,n=0,k=0,a[40000],t=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%10;
        n=n/10;
        t++;
    }
    printf("%d",a[t-k]);
}