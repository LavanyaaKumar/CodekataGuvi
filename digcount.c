int main(void) {
	int n,i,a,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
	  	a=n%10;
	  	count++;
	  	n=n/10;
	}
	printf("%d",count);
}
