#include<stdio.h>
int main()
{
	int n,a,d,i,r,sum=0;
	scanf("%d%d%d",&n,&a,&d);
    for(i=1;i<=n;i++)
    {
    r=a+(i-1)*d;
	sum=sum+r;	
	}
	printf("%d",sum);
}
