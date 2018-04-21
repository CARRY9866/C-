#include<stdio.h>
int main(){

	int x,i,j ;
	while(scanf("%d",&x)!=EOF)
	{
		if(x>0&&x<1000)
		{
			for(i=0;i<x;i++)
			{	for(j=1;j<=i+1;j++)
					printf("*");
				printf("\n");
			}
		}
	}



return 0;
}
