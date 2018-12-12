#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
	char a[5];
	int i,n,b=0;
	scanf("%s",a);
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
	if(isdigit(a[i]))
		{
			b=1;
		}
	}
    if(b==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
