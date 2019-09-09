#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	int count;
	count=n*2-1;
	for(i=1;i<=count;i++)
	{
		for(j=1;j<=count;j++)
		{
		if(i==j||(j==count-i+1))
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0;
}
