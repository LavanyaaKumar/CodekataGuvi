#include<stdio.h>
int main()
{
	int x,y,i,j,r,temp;
	scanf("%d%d",&x,&y);
	for(i=x+1;i<y;i++)
	{
		temp=i;
		int arm=0;
		while(temp!=0)
		{
			r=temp%10;
			arm=(r*r*r)+arm;
			temp=temp/10;
		}
		if(i==arm)
		{
			printf("%d",i);
		}
	}
  return 0;
}
