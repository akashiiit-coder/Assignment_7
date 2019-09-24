#include <stdio.h>
int main()
{
    int n,s=0;
    scanf("%d ",&n);// if i remove space here nan would be the output as it requires something
    int a[2*n];
    for(int i=0;i<2*n;i+=2)
    {
        scanf("(%d,%d)",&a[i],&a[i+1]);
        s+=a[i]*a[i+1];
    }
    printf("%d\n",s);
}