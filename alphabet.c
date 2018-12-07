#include<stdio.h>
int main()
{
	char d;
	scanf("%c",&d);
	if(d>='a' && d<='z'||d>='A' && d<='Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
}
