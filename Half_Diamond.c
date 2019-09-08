#include <stdio.h>

int main(void) {
	int i,j,n,column;
	scanf("%d",&n);
	column=1;
	for(i=1;i<=n*2;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("*");
		}
		if(i<n)
		{
				column++;
		}
		else
		{
			column--;
		}
		printf("\n");
	}
	return 0;
}
