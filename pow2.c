#include <stdio.h>
int main(void)
{
int a,n,b;
scanf("%d",&n);
while(n!=1)
{
    if(n%2!=0)
    {
    a=1;
    break;
    }
    n=n/2;
}
if(a==1)
printf("no");
else
printf("yes");
}
