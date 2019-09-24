#include <stdio.h>
int main()
{
    int n,s=0,m;
    scanf("%d %d ",&n,&m);
    int a[m*n];
    for(int i=0;i<n;i++)
    {
        scanf("(");
        for(int j=0;j<m-1;j++)
        {
            scanf("%d,",&a[j]);
            s+=a[j];
        }
        scanf("%d",&a[m-1]);
        s+=a[m-1];
        scanf(")");
    }
    printf("%d\n",s);
}