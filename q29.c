#include <stdio.h>
#include <math.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    int a[2*n];
    for(int i=0;i<2*n-1;i++)
    {
        scanf("%d, ",&a[i]);
    }
    scanf("%d",&a[2*n-1]);
    for(int i=0;i<2*n-1;i+=2)
    {
        s+=pow(a[i],a[i+1]);
    }
    printf("%d",s);
}