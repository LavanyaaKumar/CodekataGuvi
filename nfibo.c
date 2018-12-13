#include <stdio.h>

int main(void) 
{
	int n,i;
	scanf("%d",&n);
	int a=0,b=1,c;
	printf("%d ",b);
    for(i=0;i<n-1;i++)
    {
    	c=a+b;
    	printf("%d ",c);
    	a=b;
    	b=c;
    }
}
