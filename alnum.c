#include <stdio.h>

int main(void) {
  char a[10],i,b=0;
  for(i=0;i!='/0';i++)
  {
  	if((isalnum(a[i]))!=0)
  	b++;
  }
  if(b!=0)
  {
  	printf("yes");
  }
  else
  printf("no");
}
