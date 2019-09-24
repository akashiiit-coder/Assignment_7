#include <stdio.h>
int main()
{
    int n,s=0,m;
    scanf("%d %d ",&n,&m);
    int a[m*n],p=1;
    for(int i=0;i<n;i++)
    {
        scanf("(");
        for(int j=0;j<m-1;j++)
        {
            scanf("%d,",&a[j]);
            p*=a[j];
        }
        scanf("%d",&a[m-1]);
        p*=a[m-1];
        scanf(")");
        s+=p;
        p=1;
    }
    printf("%d\n",s);
}