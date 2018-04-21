#include<stdio.h>
int main(){

	int x,i,j,star,space;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=0,space=x/2,star=1;i<=x/2;i++,space--,star+=2)
		{
			for(j=0;j<space;j++)printf(" ");
			for(j=0;j<star;j++)printf("*");
			printf("\n");
		}
		for(i=0,space=1,star=x-2;i<x/2;i++,space++,star-=2)
		{
			for(j=0;j<space;j++)printf(" ");
			for(j=0;j<star;j++)printf("*");
			printf("\n");
		}
	
	}


return 0;}
