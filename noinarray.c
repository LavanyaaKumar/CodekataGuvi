#include <stdio.h>

int main(void) {
int n1,n2,k,a[10],i,y=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(k==a[i])
	y=1;
	break;
}
if(y==1)
printf("yes");
else
printf("no");
}
