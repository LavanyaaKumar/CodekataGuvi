#include <stdio.h>

int main()
{
    int a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    if(b1<60 && b2<60)
    {
        if(a1==a2 && b1==b2)
        {
            a3=0;
            b3=0;
        }
        else if(a1>a2)
        {
            if(b1>b2)
            {
                b3=b1-b2;
            }
            else
            {
                a1=a1-1;
                b3=(b1+60)-b2;
            }
        }
        a3=a1-a2;
    }
    else
    {
        if(b2>b1)
        {
            b3=b2-b1;
        }
        else
        {
            a2=a2-1;
            b3=(b2+60)-b1;
        }
        a3=a2-a1;
    }
    printf("%d %d",a3,b3);
    return 0;
}
