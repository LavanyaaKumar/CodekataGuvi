#include<stdio.h>
int main()
{
	int n,b[10],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	if(n%2!=0)
	{
		int m=n/2;
		printf("%d ",b[m]);
	}
	else
	{
		int d=(b[n/2]+b[n/2]-1)/2;
		printf("%d ",d);
	}
}
