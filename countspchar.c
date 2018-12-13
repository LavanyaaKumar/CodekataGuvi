#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	scanf("%s",a);
	int i,n,count=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]>+'0' && a[i]<='9')||(a[i]==' '))
		{
			continue;
		}
		else
		{
			count++;
		}
	}
	printf("%d",count);
}
