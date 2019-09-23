#include <stdio.h>
int a,b,c;
int main()
{
    scanf("%dx %dy %d=",&a,&b,&c);
    printf("(%.1f,0)",-(float)c/a);
}