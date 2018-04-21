#include<stdio.h>
int main(){

	int x;
	while(scanf("%d",&x)!=EOF)
	{
		int i,j;
		for(i=1;i<=x;i++)
		{	for(j=0;j<i;j++)
				printf("*");
			printf("\n");
		}
	}


return 0;}
