#include <stdio.h>

int main(void) {
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
