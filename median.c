#include<stdio.h>
int main()
{
	int n,a[10],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	if(n%2!=0)
	{
		int m=n/2;
		printf("%d ",a[m]);
	}
	else
	{
		int d=(a[n/2]+a[n/2]-1)/2;
		printf("%d ",d);
	}
}
