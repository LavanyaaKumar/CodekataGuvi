#include<stdio.h>
int main()
{
	int t,h,m;
	scanf("%d",&t);
	if(t<60)
	{
		printf("0\t%d",t);
		
	}
	else
	{
		h=t/60;
		m=t%60;
		printf("%d %d",h,m);
	}
	return 0;
}
