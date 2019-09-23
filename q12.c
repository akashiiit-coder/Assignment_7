#include <stdio.h>
int main()
{
    int a[2];
    scanf("%d%di",&a[0],&a[1]);
    if(a[0]==0 && a[1]==1)
       printf("i") ;
    else if(a[0]==0 && a[1]==-1)
       printf("-i") ;
    else if(a[0]==0 && a[1]==0)
        printf("0");
    else if (a[0]==0)
        printf("%di",a[1]);
    else if(a[1]==0)
        printf("%d",a[0]);
    else if(a[1]==1)
    printf("%d+i",a[0]);
    else if(a[1]==-1)
    printf("%d-i",a[0],a[1]);
    else 
    printf("%d%+di",a[0],a[1]);
}