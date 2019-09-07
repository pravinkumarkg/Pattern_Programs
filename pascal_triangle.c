#include <stdio.h>
long long fact(int n);
int main(void) {
	int n,i,k,num;
	scanf("%d",&num);
	long term;
	for(n=0;n<=num;n++)
	{
		for(i=n;i<=num;i++)
		{
			printf("%3c",' ');
		}
		for(k=0;k<n;k++)
		{
			term=fact(n)/(fact(k)*fact(n-k));
			printf("%6ld",term);
		}
		printf("\n");
	}
	return 0;
}
long long fact(int n)
{
	long long factorial=1ll;
	while(n>=1)
	{
		factorial*=n;
		n--;
	}
	return factorial;
}
