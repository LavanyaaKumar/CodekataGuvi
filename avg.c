#include<stdio.h>
int main()
{
	int a[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	int avg=sum/n;
	printf("%d",avg);
}
