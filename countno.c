#include <stdio.h>

int main(void)
{
	int a,i,num,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
	   num=a%10;
	   count++;
       a=a/10;
	}
	printf("%d",count);
}
	
