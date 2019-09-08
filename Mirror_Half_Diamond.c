#include <stdio.h>

int main(void) {
	int i,j,n,star,space;
	scanf("%d",&n);
	space=n-1;
	star=n;
	for(i=1;i<n*2;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(j=1;j<=star;j++)
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
