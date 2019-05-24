#include <stdio.h>
int main(void)
{
	int a[100],i,n,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		max=a[0];
		if(a[i]>max)
		{
			max=a[i];
		}
	    min=a[0];
		if(a[i]<min)
		{
			min=a[i];
		}
		} 
		printf("%d ",min);
		printf("%d",max);
	}
