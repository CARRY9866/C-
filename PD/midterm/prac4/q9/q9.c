#include<stdio.h>
int main(){

	int i,j;
	printf("\t|");
	for(i=1;i<10;i++)printf("\t%d",i);
	printf("\n");
	for(i=0;i<45;i++)printf("-");
	printf("\n");
	for(i=1;i<10;i++)
	{	
		printf("%d\t|",i);
		for(j=1;j<10;j++)
			printf("\t%d",i*j);
		printf("\n");
	}
return 0;}