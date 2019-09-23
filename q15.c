#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d, ",&a[i]);
        s+=a[i];
    }
    scanf ("%d",&a[n-1]);
    s+=a[n-1];
    printf("%d\n",s);
}