#include<stdio.h>
int main()
{    int x,y;
    float s,t,a=199.00,b=299.00;
    char p;
    scanf("%c",&p);
    scanf("%f",&t);
    x=t;
    y=t*100;
    y=y%100;
    if(p=='A')
    {
        if(t>200)
        {
            s=(a+((x-200)*3))+(y*(3/60.0));
            printf("%.2f",s);
        }
        else
        {
            printf("%.2f",a);
        }
    }
    if(p=='B')
    {
        if(t>400)
        {
           s=(b+((x-400)*2))+(y*(2/60.0));
            printf("%.2f",s);
        }
        else
        {
            printf("%.2f",a);
        }
    }
    return 0;
}
