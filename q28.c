#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,s2=0,s1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%di",&a,&b);//space or enter separates two scanf statements
        s1+=a;
        s2+=b;
    }
    printf("%d%+di",s1,s2);
}