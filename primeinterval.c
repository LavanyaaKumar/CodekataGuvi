#include<stdio.h>
int main()
{
	int x,y,i,j;
	scanf("%d%d",&x,&y);
	for(i=x+1;i<y;i++)
	{
		int prime=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=1;
				break;
			}
	}
		if(prime==0)
		printf("%d\t",i);
		
	}
	return 0;
}
