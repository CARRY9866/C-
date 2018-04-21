#include<stdio.h>

int main(){
	
	int x , y;
	printf("\t|");
	for(x=1;x<=9;x++)printf("\t%d",x);
	printf("\n");
	for(x=0;x<45;x++)printf("-");
	printf("\n");
	for(x=1;x<=9;x++)
	{
		printf("%d\t|",x);
		for(y=1;y<=9;y++)
		{
			printf("\t%d",x*y);
		
		}
		printf("\n");
	}
return 0;
}
