#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int prime=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			break;
		}
	}
	if(prime==1)
	printf("no");
	else
	printf("yes");
}
