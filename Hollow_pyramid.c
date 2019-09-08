#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==1||i==n||j==1||j==(2*i-1))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
