#include<stdio.h>
int main()
{
	int a[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t%d",a[i],i);
		printf("\n");
	}
	return 0;
}
