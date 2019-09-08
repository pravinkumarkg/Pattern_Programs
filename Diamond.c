#include <stdio.h>

int main(void) {
	int i,j,n,star,space;
	scanf("%d",&n);
	star=1;
	space=n-1;
	for(i=1;i<=n*2;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=1;j<star*2;j++)
		{
			printf("*");
		}
		printf("\n");
		if(i<n)
		{
			star++;
			space--;
		}
		else
		{
			star--;
			space++;
		}
	}
	return 0;
}
