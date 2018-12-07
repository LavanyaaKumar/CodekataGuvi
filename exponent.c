#include<stdio.h>
int main()
{
	int n,e,i;
	scanf("%d%d",&e,&n);
	int pow=1;
	for(i=0;i<n;i++)
	{
		pow=pow*e;
	}
	printf("%d",pow);
}
