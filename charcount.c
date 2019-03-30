#include <stdio.h>
#include<string.h>
int main(void) {
char a[100];
gets(a);
int i,count=0;
for(i=0;i<strlen(a);i++)
{
	if(a[i]!=' ')
	{
		count++;
	}
}
printf("%d",count);
}
