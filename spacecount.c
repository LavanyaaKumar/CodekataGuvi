#include <stdio.h>
#include<string.h>
int main(void) {
	char a[30];
	gets(a);
	int i,n,count=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
