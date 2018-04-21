#include<stdio.h>

int main(){

	int x , y;
	scanf("%d%d",&x,&y);
	
	printf("X\tY\tX+Y\tX-Y\tX*Y\n----------------------------------------\n");

	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n",x,y,x+y,x-y,x*y);
		x=x+1;
		y=y+1;
	}
	



	return 0;

}
