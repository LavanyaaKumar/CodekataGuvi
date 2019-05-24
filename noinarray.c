#include <stdio.h>

int main(void) {
int n1,n2,k,a[10],i,y=0;
scanf("%d%d%d",&n1,&n2,&k);
for(i=0;i<k;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
	if(a[i]==(n1||n2))
	y=1;
	break;
}
if(y==1)
printf("yes");
else
printf("no");
}
