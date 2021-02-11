#include<stdio.h>
int main()
{
    int d,n1,c=92;
    char n;
    scanf("%c",&n);
    scanf("%d",&d);
    if (d%10==5)
    {
        printf("%c",c);
    }
    if(d%2==1)
    {
        if(n>=65&&n<=73)
        {
            printf("(^_^)");
        }
        if(n>=74&&n<=82)
        {
            printf("(*o*)");
        }
        if (n>=83&&n<=90)
        {
            printf("(T_T)");
        }
    }
    else
    {
        if(n>=65&&n<=73)
            {
                printf("{@_@}");
            }
        if(n>=74&&n<=82)
            {
                printf("{*v*}");
            }
        if (n>=83&&n<=90)
            {
                printf("{x_x}");
            }
    }
    if (d%10==5)
    {
        printf("/");
    }
    return 0;
}
