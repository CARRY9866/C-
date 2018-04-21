#include<stdio.h>

int main(){

	int x ;
	int i , j;

	while(scanf("%d",&x)!=EOF)
	{
		for(i=0;i<x;i++)
		{
			for(j=0;j<i+1;j++)
				printf("*");
			printf("\n");
		}
	
	
	}
	


return 0;}
