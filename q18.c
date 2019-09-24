#include <stdio.h>
#include <math.h>
int main()
{
    int n,s=0;
    scanf("%d ",&n);// 1 space is required here so that we can hit enter
    int a[n];
    scanf("(%d,",&a[0]);//alternatively we can put the above space here before the bracket too
    for(int i=1;i<n-1;i++)
    {
        scanf("%d,",&a[i]);
    }
    scanf("%d)",&a[n-1]);
    for(int i=0;i<n;i++)
    {
        s+=pow(a[i],2);
    }
    printf("%lf",sqrt(s));
}