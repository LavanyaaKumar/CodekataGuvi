#include<stdio.h>
int main()
{
int d,rem,temp;
int arm=0;
scanf("%d",&d);
temp=d;
while(d!=0)
{
	rem=d%10;
	arm=(rem*rem*rem)+arm;
	d=d/10;
}
if(temp==arm)
printf("yes");
else
printf("no");	
}
