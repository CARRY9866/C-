#include<stdio.h>
int main(){

	int x , y,i;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		printf("X\tY\tX+Y\tX-Y\tX*Y");
		printf("\n");
		for(i=0;i<40;i++)printf("-");
		printf("\n");
		for(i=0;i<5;i++)
		{
			printf("%d\t%d\t%d\t%d\t%d\t",x,y,x+y,x-y,x*y);
			printf("\n");
			x++;y++;
		}
	
	}


return 0;}
