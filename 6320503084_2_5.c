#include<stdio.h>
int main()
{
 int d,m,n;
    scanf("%d %d",&d,&m);
    if(d>7)
    {
     d=d%7;
    }
 switch(m)
    {
        case 1: n=31; break;
        case 2: n=28; break;
        case 3: n=31; break;
        case 4: n=30; break;
        case 5: n=31; break;
        case 6: n=30; break;
        case 7: n=31; break;
        case 8: n=31; break;
        case 9: n=30; break;
        case 10: n=31; break;
        case 11: n=30; break;
        case 12: n=31; break;
    }
    if((n+d)%7==0)
    {
 printf("7");
    }
    else
 printf("%d",(n+d)%7);
}
