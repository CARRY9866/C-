#include<stdio.h>
int main(){

	int x,i,j;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=1;i<=x;i++)
		{
			for(j=0;j<i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	
	}

	return 0;
}
