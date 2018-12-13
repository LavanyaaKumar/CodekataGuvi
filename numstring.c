#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	gets(a);
	int i,n,count=0;
	n=strlen(a);
	for(i=1;i<=n;i++)
	{
		if(isdigit(a[i])!=0)
		{
			count++;
		}
	}
	printf("%d",count);
}
