#include <stdio.h>
int main()
{
    int a[3];
    scanf("%di%dj%dk",&a[0],&a[1],&a[2]);
    if(a[0]==0 && a[1]==0 && a[2]==0)
    printf("0");
    else
    for(int i=0;i<3;i++)
    {
        if(a[i]==1)
            {
                if (i!=0)
                printf("+");
                printf("%c",'i'+i);
            }
        else if(a[i]==-1)
            {
                printf("-%c",'i'+i);
            }
        else if(a[i]==0);
        else 
           {
               if(i!=0)
            printf("%+d%c",a[i],'i'+i);
            else 
            printf("%d%c",a[i],'i'+i);
           }

    }
}
