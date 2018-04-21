#include<stdio.h>

int main(){
	
	int x , y , i;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		printf("x\ty\tx+y\tx-y\tx*y\n");
		for(i=0;i<40;i++)
			printf("-");
		printf("\n");

		for(i=0;i<5;i++)
		{
			printf("%d\t%d\t%d\t%d\t%d\n",x,y,x+y,x-y,x*y);
			x++;
			y++;		
		}
	
	
	}



return 0;
}
