#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==1||j==1||i==n||j==n||i==j)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
